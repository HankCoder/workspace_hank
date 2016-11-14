花了将进两个月的时候阅读完内核文件系统，对于文件系统是如何运行的还是有点模糊，所以想通过写一个简单的文件系统来使自己对文件系统有个深入的了解。经过拷贝抄袭ext2和minix文件系统后，写了一个简单的文件系统，我把这个简单的文件系统叫作GTFS，估计还有很多BUG，欢迎大家修正这些BUG
GTFS不支持磁盘配额和acl。链接，读写，删除，新建，改名等都支持，有时候会有莫名其妙的错误，希望大家谅解

下面先附上代码和使用信息

使用信息
在fs/Makefile中添加一行
obj-$(CONFIG_GT_FS)                += gt/
复制代码

在fs/Kconfig中添加
config GT_FS
        tristate "GOTER fs support"
        help
           GTFS is a simple Linux file system for hard disk.
复制代码

在include/linux/Kbuild中添加一行
unifdef-y += gt_fs.h
复制代码

在include/linux/magic.h中添加一行
#define GT_SUPER_MAGIC                0x0601
复制代码

为了迎接六一儿童节，所以GTFS的魔数就设为0x0601了

然后将附件中的压缩包解压，可以看到有两个目录
一个目录是mkfs.gt,进入mkfs.gt目录，里边有4个文件，mkfs.gt为生成的二进制文件，可以使用gcc -o mkfs.gt mkfs.gt.c生成mkfs.gt工具，这个工具用来创建GT文件系统，只支持mkfs.gt /dev/sdax（设备名）命令。
另一个目录是gtfs，进入gtfs目录，里边有8个文件，将gtfs/gt_fs.h移动到内核include/linux/下，然后在内核fs/ 下新建目录gt,将剩余的7个文件移动到gt下

然后make menuconfig，到filesystem下选中gtfs，然后编译即可