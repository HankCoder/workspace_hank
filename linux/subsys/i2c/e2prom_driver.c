#include <linux/module.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/i2c.h>
#include <linux/uaccess.h>
#include <linux/device.h>

/*Internal numbers to terminate lists*/
#define I2C_CLIENT_END 0xfffeU

static unsigned int gec_e2prom_major = 0;
static struct class *gec_dev_class = NULL;

static unsigned short ignore[] = {I2C_CLIENT_END};
static unsigned short normal_addr[] = {0x50, I2C_CLIENT_END};
static struct i2c_client_address_data *gec_e2prom_address_data = {
	.normal_i2c = normal_addr,
	.probe = ignore,
	.ignore = ignore,
};

struct i2c_client *gec_e2prom_client;
/*调用此函数说明设备存在*/
static int gec_e2prom_detect(struct i2c_adapter* adap, int, int)
{
	/*构建一个i2c_client来描述此设备*/
	gec_e2prom_client = kmalloc(sizeof(struct i2c_client), GFP_KERNEL);
	/*设置此结构体*/
	gec_e2prom_client->addr = 0x50;
	gec_e2prom_client->adapter = adap;
	gec_e2prom_client->driver =  &gec_i2cdev_driver;
	/*加载此结构体*/
	i2c_attach_client(gec_e2prom_client);
	return 0;
}

static int gec_i2cdev_attach_adapter(struct i2c_adapter *adap)
{
	
	/*检测设备是否存在,通过利用adap来发地址，
	 *看是否有响应，如果有响应则表示设备存在，
	 *设备存在则调用gec_detect函数 
	 */
	i2c_probe(adap, gec_e2prom_address_data, gec_e2prom_detect);
	return 0;
}

static int gec_i2cdev_detach_adapter(struct i2c_adapter *adap)
{
	return 0;
}

static char wbuf[10];
static char rbuf[10];
static ssize_t gec_i2cdev_write(struct file *file,const char __user *buf, size_t count, loff_t *offset)
{
	int ret;
	/*构建一个消息结构体*/
	struct i2c_msg e2prom_msg[1];
	/*设置片内地址*/
	wbuf[0]= 0x0;
	/*要发的数据*/
	ret = copy_from_usr(&wbuf[1], buf, count);
	/*2设置此结构体*/
	e2prom_msg[0].addr = gec_e2prom_client->addr;
	e2prom_msg[0].flags = 0;
	e2prom_msg[0].len = count + 1;
	e2prom_msg[0].buf = wbuf;
	/*发送到底层*/
	i2c_transfer(gec_e2prom_client->adapter, e2prom_msg, 1);
	return 0;
}

static ssize_t gec_i2cdev_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
{
	int ret;
	/*构建两个msg结构体*/
	struct i2c_msg e2prom_msg[2];
	wbuf[0] = 0x0;
	/*先发片内地址*/
	e2prom_msg[0].addr = gec_e2prom_client->addr;
	e2prom_msg[0].flags = 0;
	e2prom_msg[0].len = 1;
	e2prom_msg[0].buf = wbuf;

	/*读数据*/
	e2prom_msg[1].addr = gec_e2prom_client->addr;
	e2prom_msg[1].flags |= I2C_M_RD;//e2prom_msg[1].flags = 1(读)
	e2prom_msg[1].len = count;
	e2prom_msg[1].buf = rbuf;

	/*发送到底层*/
	i2c_transfer(gec_e2prom_client->adapter, e2prom_msg, 2);
	ret = copy_to_user(buf, rbuf, count);	
	return 0;
}

static const struct file_operations gec_i2cdev_fops = {

	.owner				= THIS_MODULE,
	.read				= gec_i2cdev_read,
	.write				= gec_i2cdev_write,
};

struct i2c_driver gec_i2cdev_driver = {
	.driver = {
		.name = "gec_e2prom_driver",
	},
	.attach_adapter = gec_i2cdev_attach_adapter,
	.detach_adapter = gec_i2cdev_detach_adapter,
};

static int __init gec_e2prom_init(int) 
{
	/*向上层提供接口*/
	gec_e2prom_major = register_chrdev(0, "gec_i2c_e2prom", &gec_i2cdev_fops);

	/*创建设备文件*/
	gec_dev_class = class_create(THIS_MODULE, "i2c-dev");
	device_create(gec_dev_class, NULL, MKDEV(gec_e2prom_major, 0), NULL, "gec_e2prom");
	/*加载一个i2c驱动*/
	i2c_add_driver(&gec_i2cdev_driver);
	return 0;
}

static void __exit gec_e2prom_exit(void)
{
	unregister_chardev(gec_e2prom_major, "gec_i2c_e2prom");
	device_destroy(gec_dev_class, MKDEV(gec_e2prom_major, 0), NULL, "gec_i2c_e2prom");
	class_destroy(gec_dev_class);
	i2c_del_driver(&gec_i2cdev_driver);
}

module_init(gec_e2prom_init);
module_exit(gec_e2prom_exit);
MODULE_AUTHOR("hankcoder<han@gmail.com>");
MODULE_DESCRIPTION("EEPROM DRIVERS");
MODULE_LICENSE("GPL");
