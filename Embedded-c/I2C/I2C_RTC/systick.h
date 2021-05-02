#define RCC_AHB1ENR  *((int *)(0X40023830))
#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))
	
#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))
	

void sys_tick_int(void);
void delayus(int a);
void delayms(int b);
void delaysec(int a);
