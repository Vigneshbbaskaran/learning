#define RCC_APB2ENR *((int*)(0x40023844))
#define ADC1_SR     *((int*)(0x40012000))
#define ADC1_SQR3   *((int*)(0x40012034))
#define ADC1_SMPR1  *((int*)(0x4001200C))
#define ADC1_CR1    *((int*)(0x40012004))
#define ADC1_CR2    *((int*)(0x40012008))
#define ADC1_DR     *((int*)(0x4001204C))


#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))

#define RCC_AHB1ENR *((int *)(0X40023830))
#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))
float temperature;
void PORTC0_INT(void)
{
	
	RCC_AHB1ENR |=(0x1<<2); // enable PORT C
	while(!(RCC_AHB1ENR & 0x4))
	{
		;
	}
	GPIOC_MODER |= (0x03); //enable ANALOG mode for PORT C
}
void sys_tick_int(void)
	{ 
STK_VAL   = 10; // GARBAGE VALUE
STK_CTRL |= 0X07;  // 16MHZ
  }
void ADC_int(void)
{
	RCC_APB2ENR|=(0x1<<8);//ADC clock enabled
	while(!(RCC_APB2ENR|=(0x1<<8))) //wait until clock enabled
	{
		;
	}
ADC1_SQR3 |= (0X0A); // ENABLE SEQUENCE 1 // 10 because IN10--->> PC0
ADC1_SMPR1 |= 0X7; // SAMPLE RATE  480 max cycles
ADC1_CR1 &= ~(0X3<<24); // 12 bit RESOLUTION 
ADC1_CR2 |= (0X3);// ADON CONT
ADC1_CR2 |= (0X1<<10); //EOCS
}
		
void delayms(int b)
{
	STK_VAL   = 10; // GARBAGE VALUE
STK_LOAD  = 16000*b; // 1milisec * b
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}

int main()
{ 	int i;
	sys_tick_int();
	PORTC0_INT();
	ADC_int();
	while(1)
	{
		ADC1_CR2 |= (0x1<<30); //swstart
		while((ADC1_SR & 0X2))
		{
			temperature= (ADC1_DR*300)/(float)4096; // 300---> VOLTAGE && 4096 = 2^12 RESOLUTION
		//	delayms(500);
		}
	}
}
