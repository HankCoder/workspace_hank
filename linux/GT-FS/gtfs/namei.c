#include <linux/pagemap.h>
#include "gt.h"

static int add_nondir(struct dentry *dentry,struct inode *inode){
	
	int err=gt_add_link(dentry,inode);
	if(!err){
		d_instantiate(dentry,inode);
		return 0;	
	}
	inode_dec_link_count(inode);
	iput(inode);
	return err;
}



static int gt_link(struct dentry *old_dentry,struct inode *dir,struct dentry *dentry){
	struct gt_super_block *gs=GT_SB(dir->i_sb)->s_gs;
	struct inode *inode=old_dentry->d_inode;
	if(inode->i_nlink>gs->s_link_max)
		return -EMLINK;
	inode->i_mtime=CURRENT_TIME_SEC;
	inode_inc_link_count(inode);
	atomic_inc(&inode->i_count);
	return add_nondir(dentry,inode);
}

static int gt_unlink(struct inode *dir,struct dentry *dentry){
	int err=-ENOENT;
	struct inode *inode=dentry->d_inode;
	struct page *page;
	struct gt_dir_entry *de;
	de=gt_find_entry(dentry,&page);
	if(!de)
		goto end_unlink;
	err=gt_delete_entry(de,page);
	if(err)
		goto end_unlink;
	inode->i_ctime=dir->i_ctime;
	inode_dec_link_count(inode);
end_unlink:
	return err;
}

static struct dentry *gt_lookup(struct inode *dir,struct dentry *dentry,struct nameidata *nd){
	struct inode *inode=NULL;
	ino_t ino=0;
	dentry->d_op=dir->i_sb->s_root->d_op;
	if(dentry->d_name.len>GT_NAME_LEN)
		return ERR_PTR(-ENAMETOOLONG);
	struct page *page;
	
	struct gt_dir_entry *de=gt_find_entry(dentry,&page);
	if(de){
		ino=de->ino;
		gt_put_page(page);	
	}
	if(ino){
		inode=gt_iget(dir->i_sb,ino);
		if(IS_ERR(inode))
			return ERR_CAST(inode);
	}
	d_add(dentry,inode);
	return NULL;
}

static int gt_mknod(struct inode *dir,struct dentry *dentry,int mode,dev_t rdev){
	int error;
	struct inode *inode;
	if(!old_valid_dev(rdev))
		return -EINVAL;
	 
	inode=gt_new_inode(dir,&error);
	if(inode){
		inode->i_mode=mode;
		gt_set_inode(inode,rdev);
		
		mark_inode_dirty(inode);
	
		error=add_nondir(dentry,inode);
		
	}
	return error;
}

static int gt_create(struct inode *dir,struct dentry *dentry,int mode,struct nameidata *nd){
	return gt_mknod(dir,dentry,mode,0);
}

static int gt_mkdir(struct inode *dir,struct dentry *dentry,int mode){
	struct inode *inode;
	printk("gt_mkdir in 1\n");
	struct gt_super_block *gs=GT_SB(dir->i_sb)->s_gs;
	printk("gt_mkdir in 2\n");
	int err=-EMLINK;
	if(dir->i_nlink>=(gs->s_link_max))
		goto out;
	printk("gt_mkdir in 3\n");
	inode_inc_link_count(dir);
	inode=gt_new_inode(dir,&err);
	if(!inode)
		goto out_dir;
	inode->i_mode=S_IFDIR|mode;
	if(dir->i_mode&S_ISGID)
		inode->i_mode|=S_ISGID;
	//设置该inode的操作
	gt_set_inode(inode,0);
	inode_inc_link_count(inode);
	
	err=gt_make_empty(inode,dir);
	if(err)
		goto out_fail;
	err=gt_add_link(dentry,inode);
	if(err)
		goto out_fail;
	d_instantiate(dentry,inode);
out:	
	return err;
out_fail:
	//需要减少两次，因为在alloc_inode中已经设置过一次inode->i_nlink=1
	inode_dec_link_count(inode);
	inode_dec_link_count(inode);
	iput(inode);
out_dir:
	inode_dec_link_count(dir);
	goto out;
}

static int gt_rmdir(struct inode *dir,struct dentry *dentry){
	struct inode *inode=dentry->d_inode;
	int err=-ENOTEMPTY;
	if(gt_empty_dir(inode)){
		err=gt_unlink(dir,dentry);
		if(err){
			inode_dec_link_count(dir);
			inode_dec_link_count(dir);
		}
	}
	return err;
}

static int gt_rename(struct inode * old_dir, struct dentry *old_dentry,
struct inode * new_dir, struct dentry *new_dentry)
{
	struct gt_super_block * gs = GT_SB(old_dir->i_sb)->s_gs;
	struct inode * old_inode = old_dentry->d_inode;
	struct inode * new_inode = new_dentry->d_inode;
	struct page * dir_page = NULL;
	struct gt_dir_entry * dir_de = NULL;
	struct page * old_page;
	struct gt_dir_entry * old_de;
	int err = -ENOENT;

	old_de = gt_find_entry(old_dentry, &old_page);
	if (!old_de)
		goto out;

	if (S_ISDIR(old_inode->i_mode)) {
		err = -EIO;
		dir_de = gt_dotdot(old_inode, &dir_page);
		if (!dir_de)
			goto out_old;
	}

	if (new_inode) {
		struct page * new_page;
		struct gt_dir_entry * new_de;

		err = -ENOTEMPTY;
		if (dir_de && !gt_empty_dir(new_inode))
			goto out_dir;

		err = -ENOENT;
		new_de = gt_find_entry(new_dentry, &new_page);
		if (!new_de)
			goto out_dir;
		inode_inc_link_count(old_inode);
		gt_set_link(new_de, new_page, old_inode);
		new_inode->i_ctime = CURRENT_TIME_SEC;
		if (dir_de)
			drop_nlink(new_inode);
		inode_dec_link_count(new_inode);
	} else {
		if (dir_de) {
			err = -EMLINK;
			if (new_dir->i_nlink >= gs->s_link_max)
				goto out_dir;
		}
		inode_inc_link_count(old_inode);
		err = gt_add_link(new_dentry, old_inode);
		if (err) {
			inode_dec_link_count(old_inode);
			goto out_dir;
		}
		if (dir_de)
			inode_inc_link_count(new_dir);
	}

	gt_delete_entry(old_de, old_page);
	inode_dec_link_count(old_inode);

	if (dir_de) {
		gt_set_link(dir_de, dir_page, new_dir);
		inode_dec_link_count(old_dir);
	}
	return 0;

out_dir:
	if (dir_de) {
		kunmap(dir_page);
		page_cache_release(dir_page);
	}
out_old:
	kunmap(old_page);
	page_cache_release(old_page);
out:
	return err;
}

static int gt_symlink(struct inode *dir,struct dentry *dentry,const char* symname){
	int err= -ENAMETOOLONG;
	int lon=strlen(symname)+1;
	struct inode *inode;

	if(lon>dir->i_sb->s_blocksize)
		goto out;
	inode=gt_new_inode(dir,&err);
	if(!inode)
		goto out;
	inode->i_mode=S_IFLNK|0777;
	gt_set_inode(inode,0);
	err=page_symlink(inode,symname,lon);
	if(err)
		goto out_fail;
	err=add_nondir(dentry,inode);
out:
	return err;
out_fail:
	inode_dec_link_count(inode);
	iput(inode);
	goto out;
}
//goter
const struct inode_operations gt_dir_inode_operations={
	.create		=gt_create,
	.lookup		=gt_lookup,
	.link		=gt_link,
	.unlink		=gt_unlink,
	.symlink	=gt_symlink,
	.mkdir		=gt_mkdir,
	.rmdir		=gt_rmdir,
	.mknod		=gt_mknod,
	.rename		=gt_rename,
};
