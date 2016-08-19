#ifndef _LINUX_GT_FS_H
#define _LINUX_GT_FS_H

#include <linux/types.h>
#include <linux/magic.h>


#define GT_DEFAULT_RESERVE_BLOCKS	8

#define GT_ROOT_INO	1
#define GT_FIRST_INO	2


#define GT_LINK_MAX	20	

#define GT_BLOCK_SIZE	1024
#define GT_BLOCK_LOG_SIZE	10
#define GT_BLOCKS(s)		(GT_SB(s)->s_gs->s_blocks_count)

#define GT_ADDR_PER_BLOCK		(GT_BLOCK_SIZE / sizeof(__u32))
#define GT_ADDR_PER_BLOCK_BITS(s)	(GT_SB(s)->s_gs->s_addr_per_block_bits)
#define GT_INODE_SIZE	sizeof(struct gt_inode)
#define GT_INODE_BLOCK_COUNT(s)		((GT_INODE_COUNT(s)*GT_INODE_SIZE+GT_BLOCK_SIZE-1)/GT_BLOCK_SIZE)
#define GT_INODE_COUNT(s)		(GT_SB(s)->s_gs->s_inodes_count)
#define GT_INODES_PER_BLOCK	((BLOCK_SIZE)/(sizeof(struct gt_inode)))
#define GT_INODE_BLOCK		3
#define GT_BLOCK_RESERVED	10

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
	__u8	i_nouse[10];
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

/*
哈哈哈，又加上了
*/
struct  gt_sb_info{
	struct gt_super_block * s_gs;
	struct buffer_head * s_sbh;
};


typedef unsigned long gt_fsblk_t;

#define GT_NAME_LEN	60	
struct gt_dir_entry {
	__le32 ino;
	char name[GT_NAME_LEN];
};

#endif 
