#define RCC_AHB1ENR  *((int*)(0x40023830))
#define RCC_APB1ENR  *((int*)(0x40023840))


#define GPIOB_MODER   *((int*)(0x40020400))
#define GPIOB_ODR     *((int*)(0X40020414))
#define GPIOB_AFRL    *((int*)(0X40020420))
#define GPIOB_PUPDR   *((int*)(0X4002040C))
#define GPIOB_OTYPE   *((int*)(0X40020404))
	

#define I2C1_CR1     *((int*)(0X40005400))
#define I2C1_CR2     *((int*)(0X40005404))
#define I2C1_CCR     *((int*)(0X4000541C))
#define I2C_TRISE    *((int*)(0X40005420))



#define I2C1_SR1    *((int*)(0X40005414))
#define I2C1_SR2    *((int*)(0X40005418))
#define I2C1_DR     *((int*)(0X40005410))
	//---------------------------------sw---------------------------------------------
	//---------------------------------sw---------------------------------------------
#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_IDR    *((int *)(0X40020810))
#define GPIOC_PUPDR  *((int *)(0X4002080C))
void SW_INT(void);
void I2C1_Initilization(void);
void I2C1_Configuration(void);
void I2C1_rtc_Read();
void I2C1_rtc_write();
void RTC_CLOCK_DISPLAY(int x);