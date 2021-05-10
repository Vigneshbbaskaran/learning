#define RCC_AHB1ENR  *((int*)(0x40023830))
#define GPIOB_MODER  *((int*)(0x40020400))
#define GPIOB_ODR    *((int*)(0X40020414))


#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))
	
#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))



void delay(int a);
void ENABLE();
void PortB_Init();
void WRITE_HIGH_NIBBLE(unsigned char a);
void WRITE_LOW_NIBBLE(unsigned char a);

void LCD_WRITE_COMREG(unsigned char command);
void LCD_WRITE_DATAREG(unsigned char data);
void LCD_WRITE_STRING(unsigned char s[100]);
void LCD_INITIALIZATION();
void LCD_WRITE_Value(int temp);
