#include <linux/fs.h>
#include <linux/types.h>
#include <linux/magic.h>


#define GT_ROOT_INO	1
#define GT_FIRST_INO	2

#define GT_SUPER_MAGIC	0x0601

#define GT_LINK_MAX	200	

#define BLOCK_SIZE_BITS		10
#define BLOCK_SIZE	(1<<BLOCK_SIZE_BITS)
#define GT_BLOCK_SIZE	1024
#define GT_BLOCK_LOG_SIZE	10
#define GT_BLOCKS	

#define GT_ADDR_PER_BLOCK		(GT_BLOCK_SIZE / sizeof(__u32))
#define GT_ADDR_PER_BLOCK_BITS(s)	(GT_SB(s)->s_addr_per_block_bits)
#define GT_INODE_SIZE		(sizeof(struct gt_inode))
#define GT_INODE_BLOCK_COUNT		((GT_INODE_COUNT*GT_INODE_SIZE+GT_BLOCK_SIZE-1)/GT_BLOCK_SIZE)
#define GT_INODE_COUNT		(GT_BLOCK_SIZE/GT_INODE_SIZE)
#define GT_INODES_PER_BLOCK	((GT_BLOCK_SIZE)/GT_INODE_SIZE)
#define NORM_FIRSTBLOCK	2+GT_INODE_BLOCK_COUNT
#define GT_BLOCK_RESERVED	10
#define DIRSIZE		(sizeof(struct gt_dir_entry))
struct gt_inode {
	__le16	i_mode;
	__le16	i_uid;
	__le16	i_gid;
	__le32	i_size;
	__le32	i_atime;
	__le32	i_ctime;
	__le32	i_mtime;
	__le32	i_dtime;
	__le16	i_nlinks;
	__le32	i_flags;
	__le32	i_start_block;
	__le32	i_end_block;
	__le32	i_blocks;
	__le16	i_dev;
	__le32	i_reserved;
	__u8	i_nouse[5];
};

struct gt_super_block {
	__le32 s_inodes_count;
	__le16 s_inode_size;
	__le32 s_blocks_count;
	__le32 s_free_blocks_count;
	__le32 s_free_inodes_count;
	__le32 s_first_data_block;
	__le32 s_first_ino;
	__le32 s_link_max;
	__le32 s_log_block_size;
	__le32 s_mtime;
	__le32 s_wtime;
	__le16 s_magic;
};

typedef unsigned long gt_fsblk_t;


#define GT_NAME_LEN	60	
struct gt_dir_entry {
	__le32 ino;
	char name[GT_NAME_LEN];
};
