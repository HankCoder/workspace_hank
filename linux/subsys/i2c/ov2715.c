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