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
	int ret;
	struct i2c_driver *driver;
	struct i2c_client *client = client;
	I2C_Obj *pObj;

	devAddr >>= 1;

	if (devAddr > I2C_DEV_MAX_ADDR)
		return NULL;

	if (gI2C_dev.pObj[devAddr] != NULL) {
		gI2C_dev.pObj[devAddr]->users++;
		return gI2C_dev.pObj[devAddr];
	}

	pObj = (void *)kmalloc(sizeof(I2C_Obj), GFP_KERNEL);
	gI2C_dev.pObj[devAddr] = pObj;
	memset(pObj, 0, sizeof(I2C_Obj));

	pObj->client.adapter = NULL;
	pObj->users++;
	pObj->devAddr = devAddr;

	gI2C_curAddr = pObj->devAddr;
	driver = &pObj->driver;

	pObj->nameSize=0;//i2c设备名称，注意，这里不是在/dev下面的设备节点名  
    pObj->name[pObj->nameSize++] = 'I';  
    pObj->name[pObj->nameSize++] = '2';  
    pObj->name[pObj->nameSize++] = 'C';  
    pObj->name[pObj->nameSize++] = '_';     
    pObj->name[pObj->nameSize++] = 'A' + ((pObj->devAddr >> 0) & 0xF);  
    pObj->name[pObj->nameSize++] = 'B' + ((pObj->devAddr >> 4) & 0xF);  
    pObj->name[pObj->nameSize++] = 0; 

    driver->driver.name = pObj->name;
    driver->id = I2C_DRIVERID_MISC;
    driver->attach_adapter = I2C_attachAdapter;
    driver->detach_client = I2C_detachClient;

    if ((ret = i2c_add_driver(driver))) {
    	printk( KERN_ERR "I2C: ERROR: Driver registration failed 
    		(address=%x), module not inserted.\n", pObj->devAddr);
    }

    if (ret < 0) {
    	gI2C_dev.pObj[pObj->devAddr] = NULL;
    	kfree(pObj);
    	return NULL;
    }
    return pObj;
}

/*
*其他两个命令是I2C_CMD_WRITE和I2C_CMD_READ，
*这个比较简单，只需设置寄存器地址的大小以及寄存器值的大小，
*然后通过i2c-core 提供的i2c_transfer()函数发送即可。例如I2C_wirte()
*/
int I2C_write(I2C_Obj *pObj, uint8_t *reg, uint8_t *buffer, uint8_t count, uint8_t dataSize)
{
	
	uint8_t i;
	int err;
	struct i2c_client *client;
	struct i2c_msg msg[1];
	unsigned char data[8];

	if (pObj == NULL)
		return -ENODEV;

	client = &pObj->client;
	if (!client->adapter)
		return -ENODEV;

	if (dataSize <= 0 || dataSize > 4)
		return -1;

	for (i = 0; i < count; i++) {
		
		msg->addr = client->addr;//设置要写的i2c设备地址 
		msg->flags = 0;
		msg->buf = data;////date为准备i2c通信的缓冲区，这个缓冲区除了不包含设备地址外，要包括要目标寄存器地址，和要写入该寄存器的值

		data[0] = reg[i];
		if(dataSize==1) {//寄存器值长度为1  
       		data[1]  = buffer[i];//寄存器值赋值  
       		msg->len = 2;     //设置data长度为2      
    	} else if(dataSize==2) {//寄存器值长度为2  
       		data[1] = buffer[2*i+1];  
       		data[2] = buffer[2*i];  
       		msg->len = 3;  
    	}   
    	err = i2c_transfer(client->adapter, msg, 1);//调用i2c-core中的i2c_transfer发送i2c数据  
    	if( err < 0 )  
      		return err;  
    }  
    
  return 0;
}

int I2C_attachAdapter(struct i2c_adapter *adapter)  
{  
    return I2C_detectClient(adapter, gI2C_curAddr);  
}  

int I2C_detectClient(struct i2c_adapter *adapter, int address)
{
	I2C_Obj *pObj;
	struct i2c_client *client;
	int err = 0;

	if (address > I2C_DEV_MAX_ADDR) {
		printk( KERN_ERR "I2C: ERROR: Invalid device address %x\n", address);
		return -1;
	}

	pObj = gI2C_dev.pObj[address];

	if (pObj == NULL) {
		printk( KERN_ERR "I2C: ERROR: Object not found for address %x\n", address);
		return -1;
	}

	client = &pObj->client;
	if (client) 
		return -EBUSY;

	memset(client, 0x00, sizeof(struct i2c_client));
	client->addr = pObj->devAddr;
	client->adpater = adapter;
	client->driver = &pObj->driver;

	if ((err = i2c_attach_client(client))) {
		printk( KERN_ERR "I2C: ERROR: Couldn't attach %s (address=%x)\n", pObj->name, pObj->devAddr);
		client->adapter = NULL;
		return err;
	}
	return 0;
}

int I2C_detachClient(struct i2c_client *client)  
{  
    int err;  
  
    if(!client->adapter)  
        return -ENODEV; /* our client isn't attached */  
  
    if((err = i2c_detach_client(client))) {  
        printk( KERN_ERR "Client deregistration failed (address=%x), client not detached.\n", client->addr);  
        return err;  
    }  
  
    client->adapter = NULL;  
  
    return 0;  
}  