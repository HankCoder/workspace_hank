#include <linux/module.h>
#include <linux/string.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/init.h>
#include <linux/blkdev.h>
#include <linux/parser.h>
#include <linux/random.h>
#include <linux/buffer_head.h>
#include <linux/exportfs.h>
#include <linux/smp_lock.h>
#include <linux/vfs.h>
#include <linux/seq_file.h>
#include <linux/mount.h>
#include <linux/log2.h>
#include <asm/uaccess.h>
#include "gt.h"

static void gt_sync_super(struct super_block *sb,
			struct gt_super_block *gs);


static void gt_put_super(struct super_block *sb){

	struct gt_sb_info *sbi=GT_SB(sb);

	brelse(sbi->s_sbh);
	sb->s_fs_info=NULL;
	kfree(sbi);

}	

static struct kmem_cache *gt_inode_cachep;

static struct inode *gt_alloc_inode(struct super_block *sb){
	struct gt_inode_info *gi;

	gi=(struct gt_inode_info *)kmem_cache_alloc(gt_inode_cachep,GFP_KERNEL);
	if(!gi)
		return NULL;
	
	return &gi->vfs_inode;

}

static void destroy_inodecache(void){
         kmem_cache_destroy(gt_inode_cachep);
}

static void init_once(void *foo){
	struct gt_inode_info *gi=(struct gt_inode_info *)foo;
	inode_init_once(&gi->vfs_inode);
}

static int init_inodecache(void){
	gt_inode_cachep=kmem_cache_create("gt_inode_cache",sizeof(struct gt_inode_info),0,(SLAB_RECLAIM_ACCOUNT|SLAB_MEM_SPREAD),init_once);
	if(gt_inode_cachep==NULL)
		return -ENOMEM;
	return 0;
}

static void gt_destroy_inode(struct inode *inode){
	kmem_cache_free(gt_inode_cachep,GT_I(inode));
}

static int gt_write_inode(struct inode *inode,int wait){
	brelse(gt_update_inode(inode));
	return 0;
}

static void gt_delete_inode(struct inode *inode){
	truncate_inode_pages(&inode->i_data,0);
	GT_I(inode)->i_dtime=get_seconds();
	inode->i_size=0;
	gt_truncate(inode);
	gt_free_inode(inode);
}

static int gt_statfs(struct dentry *dentry,struct kstatfs *buf){
	struct gt_sb_info * sbi=GT_SB(dentry->d_sb);
	struct gt_super_block *gs=sbi->s_gs;
	buf->f_type=dentry->d_sb->s_magic;
	buf->f_bsize=dentry->d_sb->s_blocksize;
	buf->f_blocks=(gs->s_blocks_count-gs->s_first_data_block);
	buf->f_bfree=gt_count_free_blocks(sbi);
	buf->f_bavail=buf->f_bfree;
	buf->f_ffree=gt_count_free_inodes(sbi);
	buf->f_namelen=GT_NAME_LEN;
	return 0;
}


static int gt_write_super(struct super_block *sb){
	struct gt_super_block *gs;
	lock_kernel();
	gs=GT_SB(sb)->s_gs;
	gs->s_free_blocks_count=cpu_to_le32(gt_count_free_blocks(sb));
	gs->s_free_inodes_count=cpu_to_le32(gt_count_free_inodes(sb));
	gs->s_mtime=cpu_to_le32(get_seconds());
	gs->s_wtime = cpu_to_le32(get_seconds());
	mark_buffer_dirty(GT_SB(sb)->s_sbh);
	sync_dirty_buffer(GT_SB(sb)->s_sbh);
	sb->s_dirt=0;	
	unlock_kernel();
}

static const struct super_operations gt_sops={
	.alloc_inode	=gt_alloc_inode,
	.destroy_inode	=gt_destroy_inode,
	.write_inode	=gt_write_inode,
	.delete_inode	=gt_delete_inode,
	.write_super    =gt_write_super,
	.put_super	=gt_put_super,
	.statfs		=gt_statfs,
};


static int gt_fill_super(struct super_block *sb,void *data,int silent){

	struct buffer_head *bh;
	struct gt_super_block *gs;	struct gt_sb_info *sbi;
	struct inode *root;
	
	unsigned long sb_block=1;

	long ret=-EINVAL;
	
	int blocksize=BLOCK_SIZE;

	sbi=kzalloc(sizeof(struct gt_sb_info),GFP_KERNEL);
	if(!sbi)
		return -ENOMEM;

	if(!sb_set_blocksize(sb,BLOCK_SIZE))
		goto out_bad_hblock;
	if(!(bh=sb_bread(sb,sb_block))){
		printk("GT-fs:unable to read superblock\n");
		goto failed_sbi;
	}

	gs=(struct gt_super_block *)(bh->b_data);
	sbi->s_sbh=bh;
	sbi->s_gs=gs;
	sb->s_fs_info=sbi;
	sb->s_magic=gs->s_magic;

	if(sb->s_magic !=GT_SUPER_MAGIC)
		goto cantfind_gt;

	blocksize=GT_BLOCK_SIZE;

	sb->s_op=&gt_sops;
	
	root=gt_iget(sb,GT_ROOT_INO);
	if(IS_ERR(root)){
		ret=PTR_ERR(root);
		printk(KERN_ERR "GT-fs: can't find root inode\n");
		goto failed_mount;	
	}
	if (!S_ISDIR(root->i_mode) || !root->i_blocks || !root->i_size) {
		iput(root);
		printk(KERN_ERR "isdir?%d,root->i_blocks=%d,root->i_size=%d\n",S_ISDIR(root->i_mode) , root->i_blocks, root->i_size);
		printk(KERN_ERR "GT-fs: corrupt root inode\n");
		goto failed_mount;
	}

	sb->s_root = d_alloc_root(root);
	if (!sb->s_root) {
		iput(root);
		printk(KERN_ERR "GT: get root inode failed\n");
		ret = -ENOMEM;
		goto failed_mount;
	}
	
	return 0;
cantfind_gt:
	printk("VFS: Can't find an gt filesystem on dev %s.\nmagic on dev is %d and magic of GT is %d\n",sb->s_id,sb->s_magic,GT_SUPER_MAGIC);
failed_mount:
	brelse(bh);
out_bad_hblock:
	printk("GT-fs:blocksize too small for device\n");
failed_sbi:
	sb->s_fs_info=NULL;
	kfree(sbi);
	return ret;
}
/*
static void gt_sync_super(struct super_block *sb,struct gt_super_block *gs){
	gs->s_free_blocks_count = cpu_to_le32(gt_count_free_blocks(sb));
	gs->s_free_inodes_count = cpu_to_le32(gt_count_free_inodes(sb));
	gs->s_wtime = cpu_to_le32(get_seconds());
	mark_buffer_dirty(GT_SB(sb)->s_sbh);
	sync_dirty_buffer(GT_SB(sb)->s_sbh);
	sb->s_dirt = 0;
}
*/

static int gt_get_sb(struct file_system_type *fs_type,
int flags,const char *dev_name,void *data,struct vfsmount *mnt){
	return get_sb_bdev(fs_type,flags,dev_name,data,gt_fill_super,mnt);
}



static struct file_system_type gt_fs_type ={
	.owner		=THIS_MODULE,
	.name		="gt",
	.get_sb		=gt_get_sb,
	.kill_sb	=kill_block_super,
	.fs_flags	=FS_REQUIRES_DEV,	
};


static int __init init_gt_fs(void){
	int err=init_inodecache();
	if(err)
		return err;
	err=register_filesystem(&gt_fs_type);
	if(err)
		goto out;
	return 0;
out:
	destroy_inodecache();
	return err;
}


static void __exit exit_gt_fs(void){
	unregister_filesystem(&gt_fs_type);
	destroy_inodecache();
}

module_init(init_gt_fs)
module_exit(exit_gt_fs)
