#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <ctype.h>
#include <stdlib.h>
#include <termios.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <mntent.h>
#include <getopt.h>

#include "gt.h"


#ifndef BLKGETSIZE
#define BLKGETSIZE _IO(0x12,96)
#endif

#ifndef __GNUC__
#error "needs gcc for the bitop-__asm__'s"
#endif

#define GT_ROOT_INO	1
#define GT_BAD_INO	2

#define TEST_BUFFER_BLOCKS	16
#define MAX_GOOD_BLOCKS		512

#define UPPER(size,n)	((size +(n)-1)/(n))
#define	INODE_SIZE	(sizeof(struct gt_inode))

#define INODE_BLOCKS	UPPER(INODES,GT_INODES_PER_BLOCK)
#define INODE_BUFFER_SIZE	(INODE_BLOCKS*BLOCK_SIZE)

#define BITS_PER_BLOCK	(BLOCK_SIZE<<3)

static char *program_name="mkfs";
static char *device_name=NULL;
static int DEV=-1;
static long BLOCKS=0;
static int check=0;
static int badblocks=0;
static int namelen=30;

#define dirsize	(sizeof(struct gt_dir_entry))
static int magic=GT_SUPER_MAGIC;

static char root_block[BLOCK_SIZE]="\0";

static char * inode_buffer=NULL;

#define Inode	(((struct gt_inode *)inode_buffer)-1)

static char super_block_buffer[BLOCK_SIZE];
static char boot_block_buffer[512];

#define Super	(*(struct gt_super_block *)super_block_buffer)	
#define INODES	((unsigned long)Super.s_inodes_count)
#define ZONES	((unsigned long)Super.s_blocks_count)
#define IMAPS ((unsigned long)s_imap_blocks)
#define ZMAPS ((unsigned long)s_zmap_blocks)


#define FIRSTZONE	((unsigned long)Super.s_first_data_block)
#define BLOCKSIZE	((unsigned long)Super.s_log_block_size)
#define ZONESIZE	BLOCKSIZE
#define MAGIC	(Super.s_magic)
#define NORM_FIRSTZONE	(2+INODE_BLOCKS)

static char *inode_map;
static char *zone_map;

static unsigned short good_blocks_table[MAX_GOOD_BLOCKS];
static int used_good_blocks=0;
static unsigned long req_nr_inodes=0;

#include "bitops.h"
#define inode_in_use(x)	(bit(inode_map,(x)))
#define zone_in_use(x)	(bit(zone_map,(x)-FIRSTZONE+1))

#define mark_inode(x)	(setbit(inode_map,(x)))
#define unmark_inode(x)	(clrbit(inode_map,(x)))

#define mark_zone(x)	(setbit(zone_map,(x)-FIRSTZONE+1))
#define umark_zone(x)	(clrbit(zone_map,(x)-FIRSTZONE+1))

static void die(char *str){
	fprintf(stderr,"%s:",program_name);
	fprintf(stderr,str,device_name);
	fprintf(stderr,"\n");	
	exit(8);
}

static long valid_offset(int fd,int offset){
	char ch;
	if(lseek(fd,offset,0)<0)
		return 0;
	if(read(fd,&ch,1)<1)
		return 0;
	return 1;
}

static int count_blocks(int fd){
	int high,low;
	low=0;
	for(high=1;valid_offset(fd,high);high*=2)
		low=high;
	while(low<high-1){

		const int mid=(low+high)/2;
		if(valid_offset(fd,mid))
			low=mid;
		else
			high=mid;
	}
	valid_offset(fd,0);
	return (low+1);
}

static int get_size(const char *file){

	int fd;
	long size;
	fd=open(file,O_RDWR);
	if(fd<0){
		perror(file);
		exit(1);
	}
	if(ioctl(fd,BLKGETSIZE,&size)>=0){
		
		close(fd);
		return (size*512);
	}
	size=count_blocks(fd);
	close(fd);
	return size;
}

static void write_tables(void){
	
	if(lseek(DEV,0,SEEK_SET))
		die("seek to boot block failed in write_tables");
	if(512!=write(DEV,boot_block_buffer,512))
		die("unable to clear boot sector");
	if(BLOCK_SIZE!=lseek(DEV,BLOCK_SIZE,SEEK_SET))
		die("seek failed in write_tables");
	if(BLOCK_SIZE!=write(DEV,super_block_buffer,BLOCK_SIZE))
		die("unable to write super-block");
	if(INODE_BUFFER_SIZE!=write(DEV,inode_buffer,INODE_BUFFER_SIZE))
		die("unable to write inodes");

}

static void write_block(int blk,char *buffer){
	if(blk*BLOCK_SIZE!=lseek(DEV,blk*BLOCK_SIZE,SEEK_SET))
		die("seek failed in write_block");
	if(BLOCK_SIZE!=write(DEV,buffer,BLOCK_SIZE))
		die("write failed in write_block");
}

static int get_free_block(void){
	int blk;
	if(used_good_blocks+1>=MAX_GOOD_BLOCKS)
		die("too many bad blocks");
	if(used_good_blocks)
		blk=good_blocks_table[used_good_blocks-1]+1;
	else
		blk=FIRSTZONE;
	while(blk<ZONES&&zone_in_use(blk))
		blk++;
	if(blk>=ZONES)
		die("not enough good blocks");
	good_blocks_table[used_good_blocks]=blk;
	used_good_blocks++;
	return blk;
}

static void mark_good_blocks(void){
	int blk;
	for(blk=0;blk<used_good_blocks;blk++)
		mark_zone(good_blocks_table[blk]);
}

static inline int next(int zone){
	if(!zone)
		zone=FIRSTZONE-1;
	while(++zone<ZONES)
		if(zone_in_use(zone))
			return zone;
	return 0;
}

static void make_bad_inode(void){
	struct gt_inode *inode=&Inode[GT_BAD_INO];
	int i,j,zone;
	int ino=0;
	int block;
	unsigned short bad_buffer[BLOCK_SIZE>>1];
	
#define NEXT_BAD	(zone=next(zone))
	if(!badblocks)
		return;
	inode->i_nlinks=1;
	//inode->i_time=time(NULL);
	inode->i_mode=S_IFREG+0000;
	inode->i_size=badblocks*BLOCK_SIZE;
	zone=next(0);
	block=get_free_block();
	inode->i_start_block=block;
	inode->i_end_block=block;
	inode->i_blocks=1;
	for(i=0;i<512;i++){
		bad_buffer[i]=zone;
		if(!NEXT_BAD)
			goto end_bad;
	}
	unsigned short bad_buffer2[BLOCK_SIZE>>1];	
	for(i=0;i<512;i++){
		bad_buffer2[i]=zone;
		if(!NEXT_BAD)
			goto end_bad;
	}

	die("too many bad blocks");
end_bad:
	write_block(block,(char *)bad_buffer);
	if(zone_in_use(block+1)){
		printf("error in next block");
		return;
	}
	inode->i_end_block=block+1;
	inode->i_blocks=2;
	write_block(block+1,(char *)bad_buffer2);
}

static void make_root_inode(void){

	struct gt_inode *inode=&Inode[GT_ROOT_INO];
	mark_inode(GT_ROOT_INO);
	inode->i_start_block=get_free_block();
	inode->i_end_block=inode->i_start_block;
	inode->i_blocks=1;
	inode->i_nlinks=2;
	//inode->i_time=time(NULL);
	if(badblocks)
		inode->i_size=3*dirsize;
	else{
		root_block[2*dirsize]='\0';
		root_block[2*dirsize+1]='\0';
		inode->i_size=2*dirsize;
	}
	inode->i_mode=S_IFDIR+0755;
	inode->i_uid=getuid();
	if(inode->i_uid)
		inode->i_gid=getgid();
	write_block(inode->i_start_block,root_block);
}
static s_imap_blocks=0;
static s_zmap_blocks=0;

static void setup_tables(void){

	int i;
	unsigned long inodes;
	memset(super_block_buffer,0,BLOCK_SIZE);
	memset(boot_block_buffer,0,512);
	Super.s_magic=magic;
	Super.s_log_block_size=0;
	Super.s_blocks_count=BLOCKS;
	
	inodes=BLOCKS/3;
	inodes=((inodes+GT_INODES_PER_BLOCK -1)& ~(GT_INODES_PER_BLOCK -1));
	Super.s_inodes_count=inodes;
	s_imap_blocks=UPPER(INODES+1,BITS_PER_BLOCK);
	s_zmap_blocks=UPPER(BLOCKS-(1+IMAPS+INODE_BLOCKS),BITS_PER_BLOCK+1);
	Super.s_first_data_block=NORM_FIRSTZONE;
	Super.s_link_max=GT_LINK_MAX;
	inode_map=malloc(IMAPS*BLOCK_SIZE);
	zone_map=malloc(ZMAPS*BLOCK_SIZE);
	if(!inode_map||!zone_map)
		die("unable to allocate buffer for maps");
	memset(inode_map,0xff,IMAPS*BLOCK_SIZE);
	memset(zone_map,0xff,ZMAPS*BLOCK_SIZE);
	for(i=FIRSTZONE;i<ZONES;i++)
		umark_zone(i);
	for(i=GT_ROOT_INO;i<INODES;i++)
		umark_zone(i);
	inode_buffer=malloc(INODE_BUFFER_SIZE);
	if(!inode_buffer)
		die("unable to allocate buffer for inodes");
	memset(inode_buffer,0,INODE_BUFFER_SIZE);
	printf("%ld inodes\n",INODES);
	printf("%ld blocks\n",ZONES);
	printf("Firstdatablock=%ld(%ld)\n",FIRSTZONE,NORM_FIRSTZONE);
	printf("Blocksize=%d\n",BLOCK_SIZE<<ZONESIZE);
}

static long do_check(char *buffer,int try,unsigned int current_block){
	long got;
	if(lseek(DEV,current_block*BLOCK_SIZE,SEEK_SET)!=current_block*BLOCK_SIZE){
		die("seek failed during testing of blocks");
	}

	got=read(DEV,buffer,try*BLOCK_SIZE);
	if(got<0)got=0;
	if(got&(BLOCK_SIZE -1)){
		printf("Weird value in do_check");
	}
	got/=BLOCK_SIZE;
	return got;
}

static unsigned int currently_testing=0;

static void alarm_intr(int alnum) {
         if (currently_testing >= ZONES)
                 return;
         signal(SIGALRM,alarm_intr);
         alarm(5);
         if (!currently_testing)
                return;
         printf("%d ...", currently_testing);
         fflush(stdout);
}

static void check_blocks(void){
	int try,got;
	static char buffer[BLOCK_SIZE *TEST_BUFFER_BLOCKS];
	
	currently_testing=0;
	signal(SIGALRM,alarm_intr);
	alarm(5);
	while(currently_testing<ZONES){
		if(lseek(DEV,currently_testing*BLOCK_SIZE,SEEK_SET)!=currently_testing*BLOCK_SIZE)
		die("seek faild in check_blocks");
		try=TEST_BUFFER_BLOCKS;
		if(currently_testing+try>ZONES)
			try=ZONES-currently_testing;
		got=do_check(buffer,try,currently_testing);
		currently_testing+=got;
		if(got==try)
			continue;
		if(currently_testing<FIRSTZONE)
			die("bad blocks before data-area: cannot make fs");
		mark_zone(currently_testing);
		badblocks++;
		currently_testing++;
	}
	if(badblocks>1)
		printf("%d bad blocks\n",badblocks);
	else if(badblocks==1)
		printf("one bad blocks\n");
}

static void get_list_blocks(char *filename){

	FILE *listfile;
	unsigned long blockno;
	
	listfile =fopen(filename,"r");
	if(listfile==NULL)
		die("can't open file of bad blocks");
	while(!feof(listfile)){
	         fscanf(listfile,"%ld\n", &blockno);
                mark_zone(blockno);
                 badblocks++;
         }
         fclose(listfile);
 
         if(badblocks > 1)
                 printf("%d bad blocks\n", badblocks);
         else if (badblocks == 1)
                 printf("one bad block\n");
}

int main(int argc,char **argv){
	char *tmp;
	struct stat statbuf;
	if(INODE_SIZE*GT_INODES_PER_BLOCK!=BLOCK_SIZE)
		die("bad inode size");
	magic=GT_SUPER_MAGIC;
	device_name=argv[1];
	BLOCKS=strtol(argv[1],&tmp,0);
	BLOCKS=get_size(device_name)/1024;
	tmp=root_block;
	*(int *)tmp=1;
	strcpy(tmp+4,".");
	tmp+=dirsize;
	*(int *)tmp=1;
	strcpy(tmp+4,"..");
	tmp+=dirsize;
	strcpy(tmp+4,"badblocks");	
	DEV=open(device_name,O_RDWR);
	if(DEV<0)
		die("unable to open %s");
	if(fstat(DEV,&statbuf)<0)
		die("unable to stat %s");
	if(!S_ISBLK(statbuf.st_mode))
		check=0;
	setup_tables();
	make_root_inode();
	make_bad_inode();
	mark_good_blocks();
	write_tables();
	return 0;
}
