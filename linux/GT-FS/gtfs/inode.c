#include <linux/smp_lock.h>
#include <linux/time.h>
#include <linux/pagemap.h>
#include <linux/module.h>
#include <linux/writeback.h>
#include <linux/buffer_head.h>
#include <linux/mpage.h>
#include <linux/sched.h>
#include <linux/backing-dev.h>
#include <linux/random.h>
#include "gt.h"

MODULE_AUTHOR("Goter");
MODULE_DESCRIPTION("GT Filesystem");
MODULE_LICENSE("GPL");


void gt_free_inode(struct inode *inode){
	struct super_block *sb=inode->i_sb;
	struct gt_super_block *gs=GT_SB(inode->i_sb)->s_gs;
	struct buffer_head *bh;
	unsigned long ino;
	ino=inode->i_ino;
	struct gt_inode *raw_inode;
	if(ino<1||ino>gs->s_inodes_count){
		printk("gt_free_inode: inode 0 or nonexistent inode\n");
		return;
	}
	raw_inode=gt_raw_inode(sb,ino,&bh);
	if(raw_inode){
		raw_inode->i_nlinks=0;
		raw_inode->i_mode=0;
	}
	if(bh){
		mark_buffer_dirty(bh);
		brelse(bh);
	}
	clear_inode(inode);
}

static const struct inode_operations gt_symlink_inode_operations={
	.readlink	=generic_readlink,
	.follow_link	=page_follow_link_light,
	.put_link	=page_put_link,
};


void gt_set_inode(struct inode *inode,dev_t rdev){
	if(S_ISREG(inode->i_mode)){
		inode->i_op=&gt_file_inode_operations;
		inode->i_fop=&gt_file_operations;
		inode->i_mapping->a_ops=&gt_aops;
	}else if(S_ISDIR(inode->i_mode)){
		inode->i_op=&gt_dir_inode_operations;
		inode->i_fop=&gt_dir_operations;
		inode->i_mapping->a_ops=&gt_aops;
	}else if(S_ISLNK(inode->i_mode)){
		inode->i_op=&gt_symlink_inode_operations;
		inode->i_mapping->a_ops=&gt_aops;
	}else
		init_special_inode(inode,inode->i_mode,rdev);
}

/*
只需要返回设置了ino的inode
*/
struct inode *gt_new_inode(struct inode *dir,int *err){

	struct super_block *sb;
	struct buffer_head *bh;
	ino_t ino=0;
	int block;
	struct inode *inode;

	struct gt_inode_info *gi;

	struct gt_inode *raw_inode;
	char *p;
	
	sb=dir->i_sb;
	inode=new_inode(sb);
	if(!inode)
		return ERR_PTR(-ENOMEM);
	gi=GT_I(inode);
	
	
	inode->i_uid=current->fsuid;
	inode->i_gid=(dir->i_mode&S_ISGID)?dir->i_gid:current->fsgid;
	inode->i_mtime=inode->i_atime=inode->i_ctime=CURRENT_TIME_SEC;
	
	block=2;
	struct gt_inode *prev=NULL;
	while(bh=sb_bread(sb,block)){
		p=bh->b_data;
		while(p<=(bh->b_data+GT_BLOCK_SIZE-GT_INODE_SIZE)){
			raw_inode=(struct gt_inode *)p;
			ino++;
			if(!raw_inode->i_nlinks&&!raw_inode->i_start_block){
				if(!prev->i_reserved)
					prev->i_reserved=GT_BLOCK_RESERVED;
				prev->i_blocks=prev->i_end_block-prev->i_start_block+1;
			
				mark_buffer_dirty(bh);
				goto find;
			}
			p+=GT_INODE_SIZE;
			
			prev=raw_inode;
		}
		brelse(bh);
		if(block>GT_INODE_BLOCK_COUNT(sb))
			break;
		block++;	
	}
	
	iput(inode);
	brelse(bh);
	*err=-ENOSPC;
	return NULL;
find:
/*内存中的inode->i_ino可能有相同的，但因为inode所属设备不同，所以没有影响
inode->i_ino就是文件在i节点块中的节点号
*/
	inode->i_ino=ino;
	
	raw_inode->i_start_block=prev->i_end_block+prev->i_reserved+1;
	gi->i_reserved=raw_inode->i_reserved;
	gi->i_start_block=gi->i_end_block=raw_inode->i_start_block;
	raw_inode->i_end_block=raw_inode->i_start_block;
	brelse(bh);
	insert_inode_hash(inode);	
	mark_inode_dirty(inode);
	*err=0;
	return inode;
}

unsigned long gt_count_free_inodes(struct super_block *sb){
	
	struct buffer_head *bh;
	struct gt_inode *gt;
	char *p;
	 
	unsigned long block=2; 
	unsigned long count=0;
	
	while(bh=sb_bread(sb,block)){
		p=bh->b_data;
		while(p<=(bh->b_data+GT_BLOCK_SIZE-GT_INODE_SIZE)){
			gt=(struct gt_inode *)p;
			if(gt->i_nlinks)
				count++;
			p+=GT_INODE_SIZE;
		}
		brelse(bh);
		if(block>GT_INODE_BLOCK_COUNT(sb))
			break;
		block++;	
	}
	
	return GT_SB(sb)->s_gs->s_inodes_count-count;
}

unsigned long gt_count_free_blocks(struct super_block *sb){

	struct gt_super_block *gs;
	char *p;
	int block=2;
	gs=GT_SB(sb)->s_gs;
	unsigned long used=0;
	struct buffer_head *bh;
	
	struct gt_inode * gt;
	while(bh=sb_bread(sb,block)){
		p=bh->b_data;
		while(p<=(bh->b_data+GT_BLOCK_SIZE-GT_INODE_SIZE)){
			gt=(struct gt_inode *)p;
			if(!gt->i_blocks)
				used=gt->i_end_block;
				
		}
		brelse(bh);
	}
	return GT_BLOCKS(sb)-used;
}


/*
删除,在ialloc.c中实现
从磁盘读取gt_inode,返回gt_inode
*/

struct gt_inode * gt_raw_inode(struct super_block *sb,ino_t ino,struct buffer_head **p){
	int block=0;
	struct buffer_head *bh;
	struct gt_sb_info *sbi=GT_SB(sb);
	struct gt_inode *gt=NULL;
	if(!ino||ino>sbi->s_gs->s_inodes_count){
		printk("Bad inode number on dev %s: %ld is out of range\n",sb->s_id,(long)ino);
		return NULL;
	}
	ino--;

	block=(2 + ino/GT_INODES_PER_BLOCK);

	if(!(bh=sb_bread(sb,block))){
		printk("Unable to read inode block\n");
		return NULL;
	}
	gt=(struct gt_inode *)((char *)(bh->b_data));
	*p=bh;
	return (struct gt_inode *)((char *)(bh->b_data+ino*sizeof(struct gt_dir_entry)));
}


/*
从磁盘上读取gt_inode，填充inode结构
*/
struct inode *gt_iget(struct super_block *sb,unsigned long ino){

	struct gt_inode_info *gi;
	struct buffer_head *bh;
	struct gt_inode *raw_inode;
	
	long ret=-EIO;
	 

	struct inode *inode=iget_locked(sb,ino);

	if(!inode)
		return ERR_PTR(-ENOMEM);
	if(!(inode->i_state &I_NEW)){
		
		return inode;
	}
	gi=GT_I(inode);

	raw_inode=gt_raw_inode(inode->i_sb,ino,&bh);
	if(!raw_inode){
		iput(inode);
		return NULL;
	}
	
	inode->i_mode=raw_inode->i_mode;
	inode->i_uid=(uid_t)raw_inode->i_uid;
	inode->i_gid=(gid_t)raw_inode->i_gid;
	inode->i_size=raw_inode->i_size;
	inode->i_nlink=raw_inode->i_nlinks;
	inode->i_rdev=raw_inode->i_dev;
	inode->i_mtime.tv_sec = inode->i_atime.tv_sec = inode->i_ctime.tv_sec = raw_inode->i_ctime;
        inode->i_mtime.tv_nsec = 0;
        inode->i_atime.tv_nsec = 0;
        inode->i_ctime.tv_nsec = 0;

	gi->i_dtime=raw_inode->i_dtime;

	if(inode->i_nlink==0 && (inode->i_mode==0||gi->i_dtime)){
		
		brelse(bh);
		ret=-ESTALE;
		goto bad_inode;
	}

	inode->i_blocks=raw_inode->i_blocks;
	gi->i_dtime=0;
	gi->i_start_block=raw_inode->i_start_block;
	gi->i_end_block=raw_inode->i_end_block;
	gi->i_blocks=raw_inode->i_blocks;
	gi->i_reserved=raw_inode->i_reserved;

	//goter dev_t rdev=0所以不支持设备，mknod也就无用了
	//修改gt_inode,添加i_dev;现在支持设备
	gt_set_inode(inode,inode->i_rdev);
	brelse(bh);
	unlock_new_inode(inode);
	
	return inode;
bad_inode:
	iget_failed(inode);
	return ERR_PTR(ret);
}
/*
同步磁盘上的gt_inode信息，用内存中的inode填充buffer_head，然后标识为脏
*/
struct buffer_head *gt_update_inode(struct inode *inode){
		
	struct gt_inode_info *gi=GT_I(inode);
	struct super_block *sb=inode->i_sb;
	ino_t ino=inode->i_ino;
	uid_t uid=inode->i_uid;
	gid_t gid=inode->i_gid;
	struct buffer_head *bh;
	struct gt_inode *raw_inode =gt_raw_inode(sb,ino,&bh);

	if(!raw_inode)
		return NULL;
	
	raw_inode->i_mode=inode->i_mode;
	raw_inode->i_uid=uid;
	raw_inode->i_gid=gid;
	raw_inode->i_nlinks=inode->i_nlink;
	raw_inode->i_size=inode->i_size;
	raw_inode->i_atime=inode->i_atime.tv_sec;
	raw_inode->i_mtime=inode->i_mtime.tv_sec;
	raw_inode->i_ctime=inode->i_ctime.tv_sec;
	//raw_inode->i_dtime=inode->i_dtime.tv_sec;
	
	if(S_ISCHR(inode->i_mode) || S_ISBLK(inode->i_mode))
		raw_inode->i_dev=old_encode_dev(inode->i_rdev);
	else{
		raw_inode->i_start_block=gi->i_start_block;
		raw_inode->i_end_block=gi->i_end_block;
		raw_inode->i_blocks=gi->i_blocks;
		raw_inode->i_reserved=gi->i_reserved;
			
	}
	mark_buffer_dirty(bh);
	return bh;
}

void gt_truncate(struct inode *inode){
	
	if(!(S_ISREG(inode->i_mode)||S_ISDIR(inode->i_mode)||S_ISLNK(inode->i_mode)))
		return;
	
	struct gt_inode_info *gi=GT_I(inode);
	block_truncate_page(inode->i_mapping,inode->i_size,gt_get_block);

	gi->i_reserved+=gi->i_end_block-gi->i_start_block+1;
	gi->i_end_block=gi->i_start_block;
	//gi->i_blocks=-1;
	/*
	块数等于0，说明文件在最后
	块数不等于0，说明文件已经封顶
	块数等于－1，说明文件已经被清空
	开始块和结束块＝0，说明该处空
	*/
	inode->i_mtime=inode->i_ctime=CURRENT_TIME_SEC;
	mark_inode_dirty(inode);
	
}

int gt_sync_inode(struct inode *inode){
	int ret=0;
	struct buffer_head *bh;
	bh=gt_update_inode(inode);
	if(bh && buffer_dirty(bh)){
		sync_dirty_buffer(bh);
		if(buffer_req(bh)&&!buffer_uptodate(bh)){
			printk("IO error syncing gt inode\n");
			ret=-1;
		}
	}else if(!bh)
		ret=-1;
	brelse(bh);
	return ret;
}


int gt_get_block(struct inode *inode,sector_t iblock,struct buffer_head *bh,int create){

	int err=-EIO;
	 
	struct gt_inode_info *gi=GT_I(inode);
	
	if(iblock>(gi->i_blocks+gi->i_reserved)){
		printk("GT-fs:function gt_get_blocks block error");
		return err;
	}
	
	gt_fsblk_t block=gi->i_start_block+iblock;
	if(block<=gi->i_end_block){
		map_bh(bh,inode->i_sb,le32_to_cpu(block));
		return 0;
	}else if(!create){		
		brelse(bh);
		return err;
	}else{
		set_buffer_new(bh);
		if(gi->i_reserved&&gi->i_blocks){//如果已经封顶
			gi->i_reserved=gi->i_blocks+gi->i_reserved-iblock;
			gi->i_end_block=gi->i_start_block+iblock-1;
			gi->i_blocks=iblock;
		}else //reserved!=0&&gi->i_blocks==0的情况不会出现,因为i_blocks至少为一
			gi->i_end_block=gi->i_start_block+iblock-1;
		
		map_bh(bh,inode->i_sb,le32_to_cpu(block));		
		mark_buffer_dirty_inode(bh,inode);
	}
	printk("gt_get_block %d\n",block);
	return 0;
}

static int gt_writepage(struct page *page,struct writeback_control *wbc){

	return block_write_full_page(page,gt_get_block,wbc);
}

static int gt_readpage(struct file *file,struct page *page){
	return block_read_full_page(page,gt_get_block);
}

int __gt_write_begin(struct file *file,struct address_space *mapping,loff_t pos,unsigned len,unsigned flags,struct page *pagep,void **fsdata){
	return block_write_begin(file,mapping,pos,len,flags,pagep,fsdata,gt_get_block);

}

static int gt_write_begin(struct file *file,struct address_space *mapping,
loff_t pos,unsigned len,unsigned flags,struct page **pagep,void **fsdata){
	*pagep=NULL;
	return __gt_write_begin(file,mapping,pos,len,flags,pagep,fsdata);
}

static sector_t gt_bmap(struct address_space *mapping,sector_t block){
	return generic_block_bmap(mapping,block,gt_get_block);
}
//goter
const struct address_space_operations gt_aops ={

	.readpage		=gt_readpage,
	.writepage		=gt_writepage,
	.sync_page		=block_sync_page,
	.write_begin		=gt_write_begin,
	.write_end		=generic_write_end,
	.bmap			=gt_bmap,
};

