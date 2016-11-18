int main(int argc, char **argv)
{
	int fd;
	char buf
	char rbuf[10]
	int adapter_nr = 0;
	char filename[20];
	snprintf(filename, 19, "/dev/i2c-%d", adapter_nr);
	
	fd = open(filename, O_RDWR);
	if (fd < 0) {
		printf("cannot open /dev/i2c-0!\n");
		return -1;
	}

	int addr = 0x40;
	ioctl(fd, I2C_SLAVE, addr);

	unsigned char addr_data = 0x0;
	buf[0] = addr_data;
	buf[1] =  0x55;

	write(fd, buf, 2);

	/*read*/

	write(fd, &addr_data, 1);
	read(fd, &rbuf, 1);
	printf("rbuf[0] = 0x%x\n", rbuf[0]);

	return 0;
}