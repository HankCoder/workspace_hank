#include <linux/fs.h>
#include <linux/types.h>
#include <linux/gt_fs.h>

struct gt_inode_info{
	__le32 i_start_block;
	__le32 i_end_block;
	__le32 i_blocks;
	__le32 i_reserved;
	__u32 i_flags;
	__u32 i_dtime;
	struct mutex truncate_mutex;
	struct inode vfs_inode;
};

static inline struct gt_inode_info *GT_I(struct inode *inode){
	return container_of(inode,struct gt_inode_info,vfs_inode);
}


static inline struct gt_sb_info * GT_SB(struct super_block *sb){
	return sb->s_fs_info;
}

extern struct inode *gt_iget(struct super_block *, unsigned long);
extern struct gt_inode * gt_raw_inode(struct super_block *, ino_t, struct buffer_head **);

extern struct inode *gt_new_inode(struct inode *dir,int *err);
extern void gt_free_inode(struct inode * inode);
extern unsigned long gt_count_free_inodes(struct super_block *sb);

extern void gt_free_block(struct inode *inode, unsigned long block);
extern unsigned long gt_count_free_blocks(struct super_block *sb);
//extern int gt_getattr(struct vfsmount *mnt,struct dentry *dentry,struct kstat *stat);
extern int __gt_write_begin(struct file *file,struct address_space *mapping,loff_t pos,unsigned len,unsigned flags,struct page *pagep,void **fsdata);
extern void gt_truncate(struct inode *);
extern int gt_sync_inode(struct inode *);
extern struct buffer_head *gt_update_inode(struct inode *inode);
extern void gt_set_inode(struct inode *, dev_t);
extern int gt_get_block(struct inode *inode,sector_t iblock,struct buffer_head *bh_result,int create);

extern unsigned gt_blocks(loff_t, struct super_block *);
extern inline void gt_put_page(struct page * page);
extern struct gt_dir_entry *gt_find_entry(struct dentry*, struct page**);
extern int gt_add_link(struct dentry*, struct inode*);
extern int gt_delete_entry(struct gt_dir_entry*, struct page*);
extern int gt_make_empty(struct inode*, struct inode*);
extern int gt_empty_dir(struct inode*);
extern void gt_set_link(struct gt_dir_entry *, struct page *,struct inode *);
extern struct gt_dir_entry *gt_dotdot(struct inode*, struct page**);
extern int gt_sync_file(struct file *, struct dentry *, int);


/*
 * Inodes and files operations
 */

/* dir.c */
extern const struct file_operations gt_dir_operations;

/* file.c */
extern const struct inode_operations gt_file_inode_operations;
extern const struct file_operations gt_file_operations;

/* inode.c */
extern const struct address_space_operations gt_aops;
/* namei.c */
extern const struct inode_operations gt_dir_inode_operations;
