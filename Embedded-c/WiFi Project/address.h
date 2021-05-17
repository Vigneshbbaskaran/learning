//================================================wifi
#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
#define GPIOA_MODER *((int*)0x40020000)
#define GPIOA_AFRH *((int*)0x40020024)

#define UART1_SR *((int*)0x40011000)
#define UART1_DR *((int*)0x40011004)
#define UART1_BRR *((int*)0x40011008)
#define UART1_CR1 *((int*)0x4001100C)

#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))

//===========================================lcd-adc

#define GPIOB_MODER  *((int*)(0x40020400))
#define GPIOB_ODR    *((int*)(0X40020414))



#define ADC1_SR     *((int*)(0x40012000))
#define ADC1_SQR3   *((int*)(0x40012034))
#define ADC1_SMPR1  *((int*)(0x4001200C))
#define ADC1_CR1    *((int*)(0x40012004))
#define ADC1_CR2    *((int*)(0x40012008))
#define ADC1_DR     *((int*)(0x4001204C))


#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))


#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))

//=================================================================
#define RCC_AHB1ENR  *((int*)(0x40023830))
#define GPIOB_MODER  *((int*)(0x40020400))
#define GPIOB_ODR    *((int*)(0X40020414))




//=======================================================================================

void delay(int a);
void ENABLE();	
void PortB_Init();
void WRITE_HIGH_NIBBLE(unsigned char a);
void WRITE_LOW_NIBBLE(unsigned char a);
void LCD_WRITE_COMREG(unsigned char command);
void LCD_WRITE_DATAREG(unsigned char data);
void LCD_WRITE_STRING(unsigned char s[100]);
void LCD_INITIALIZATION()	;
void LCD_WRITE_Value(int temp);
void PORTC0_INT(void);
void sys_tick_int(void)	;
void ADC_int(void);
void delayms(int b);
//==============================================================================
void DelayMs(int b);
void delaysec(int a);
void sys_tick_int(void);
void UART1_int(void);
void UART1_config();
void UART1_OUTCHAR(unsigned char a);
unsigned char  UART1_INCHAR(void);
void UART1_OutString(char a[100]);
int UART1_instring(void);