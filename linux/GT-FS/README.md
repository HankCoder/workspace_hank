���˽��������µ�ʱ���Ķ����ں��ļ�ϵͳ�������ļ�ϵͳ��������еĻ����е�ģ����������ͨ��дһ���򵥵��ļ�ϵͳ��ʹ�Լ����ļ�ϵͳ�и�������˽⡣����������Ϯext2��minix�ļ�ϵͳ��д��һ���򵥵��ļ�ϵͳ���Ұ�����򵥵��ļ�ϵͳ����GTFS�����ƻ��кܶ�BUG����ӭ���������ЩBUG
GTFS��֧�ִ�������acl�����ӣ���д��ɾ�����½��������ȶ�֧�֣���ʱ�����Ī������Ĵ���ϣ������½�

�����ȸ��ϴ����ʹ����Ϣ

ʹ����Ϣ
��fs/Makefile�����һ��
obj-$(CONFIG_GT_FS)                += gt/
���ƴ���

��fs/Kconfig�����
config GT_FS
        tristate "GOTER fs support"
        help
           GTFS is a simple Linux file system for hard disk.
���ƴ���

��include/linux/Kbuild�����һ��
unifdef-y += gt_fs.h
���ƴ���

��include/linux/magic.h�����һ��
#define GT_SUPER_MAGIC                0x0601
���ƴ���

Ϊ��ӭ����һ��ͯ�ڣ�����GTFS��ħ������Ϊ0x0601��

Ȼ�󽫸����е�ѹ������ѹ�����Կ���������Ŀ¼
һ��Ŀ¼��mkfs.gt,����mkfs.gtĿ¼�������4���ļ���mkfs.gtΪ���ɵĶ������ļ�������ʹ��gcc -o mkfs.gt mkfs.gt.c����mkfs.gt���ߣ����������������GT�ļ�ϵͳ��ֻ֧��mkfs.gt /dev/sdax���豸�������
��һ��Ŀ¼��gtfs������gtfsĿ¼�������8���ļ�����gtfs/gt_fs.h�ƶ����ں�include/linux/�£�Ȼ�����ں�fs/ ���½�Ŀ¼gt,��ʣ���7���ļ��ƶ���gt��

Ȼ��make menuconfig����filesystem��ѡ��gtfs��Ȼ����뼴��