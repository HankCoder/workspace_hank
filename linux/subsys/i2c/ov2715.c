typedef struct {
	
	int devAddr;

	struct i2c_client client;
	struct i2c_driver driver;

	char name[20];
	int nameSize;
	int users;
} I2C_Obj;

#define I2C_DEV_MAX_ADDR (0xFF)
#define I2C_TRANSFER_BUF_SIXE_MAX (256)

typedef struct {
	
	struct cdev cdev;
	int major;
	struct semaphore semLock;

	I2C_Obj *pObj[I2C_DEV_MAX_ADDR];

	uint8_t reg[I2C_TRANSFER_BUF_SIXE_MAX];
	uint16_t reg16[I2C_TRANSFER_BUF_SIXE_MAX];
	uint8_t buffer[I2C_TRANSFER_BUF_SIXE_MAX * 4];

} I2C_Dev;

int I2C_devInit(void)
{
	int 	result, i;
	dev_t	dev = 0;

	result = alloc_chrdev_region(&dev, 0, 1, I2C_DRV_NAME);
	for (i = 0; i < I2C_DEV_MAX_ADDR; i++)
	{
		gI2C_dev.pObj[i] = NULL;
	}

	gI2C_dev.major = MAJOR(dev);
	sema_init(&gI2C_dev.semLock, 1);
	cdev_init(&gI2C_dev.dev, &gI2c_devFileOps);
	gI2C_dev.cdev.owner = THIS_MODULE;
	gI2C_dev.cdev.ops = &gI2c_devFileOps;
	result = cdev_add(&gI2c_devFileOps.cdev, dev, 1);
	return result;
}

void I2C_devExit(void)
{
	dev_t devno = MKDEV(gI2C_dev.major, 0);
	cdev_del(&gI2c_devFileOps.cdev);
	unregister_chrdev_region(devno, 1);
}

struct file_operations gI2c_devFileOps = {
	.owner = THIS_MODULE;
	.open = I2C_devOpen;
	.release = I2C_devRelease;
	.ioctl = I2C_devIoctl;
};

/*ioctl*/
int I2C_devIoctl(struct inode * inode, struct file *filp, unsigned int cmd, unsigned long arg)
{
	I2C_Obj *pObj;
	int status = 0;
	I2C_TransferPrm transferPrm;

	pObj = (I2C_Obj *) filp->private_data;

	if (!I2C_IOCTL_CMD_IS_VALID(cmd))
	{
		return -1;
	}
	cmd = I2C_IOCTL_CMD_GET(cmd);

	down_interruptible(&gI2C_dev.semLock);

	switch(cmd)
	{
		case I2C_CMD_SET_DEV_ADDR:
			filp->private_data = I2C_create(arg);
			break;
		case I2C_CMD_WRITE:
			status = copy_from_user(&transferPrm, (void *) arg, sizeof(transferPrm));
			break;
		case I2C_CMD_READ:
			status = copy_from_user(&transferPrm, (void *) arg, sizeof(transferPrm));
			break;
		default:
			status = -1;
			break;
	}

	up(&gI2C_dev.semLock);

	return status;
}

/*
*以上三个命令中最重要最复杂的是第一个I2C_CMD_SET_DEV_ADDR，
*设置设备地址，之所以重要和复杂，因为在I2C_create()函数中，
*将通过i2c-core提供的函数把该驱动程序和底层的i2c_adapter联系起来。
*下面是I2C_create()函数源码
*/
void * I2C_create(int devAddr) 
{
	
}