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