#include "address.h"
#include "rtc.h"
#include "EEPROM.h"
#include <stdio.h>
#include <string.h>
extern int int_rtc[7]; //from RTC
extern int temperature; //from LCD
extern char Buff[36]; //from EEPROM
int x;
int clk_count=0;
char C;
void error();
void DelayMs(int b)
{
				  STK_LOAD  = 16000*b; // 1milisec * b
					STK_VAL   = 10; // GARBAGE VALUE
					while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
						{
							;
						}
}
void delaysec(int a)
{
					for(;a>0;a--)
						{
							DelayMs(1000);

						}
}
void sys_tick_int(void)
	{ 
					STK_VAL   = 10; // GARBAGE VALUE
					STK_CTRL |= 0X05;  // 16MHZ
  }

void UART1_int(void)
{
					RCC_AHB1ENR |= (0x05); // PORT A AND PORT C ENABLE
					while(!(RCC_AHB1ENR & (0x05))); 
					GPIOA_MODER |= 0x1<<19; // PA9 AF
					GPIOA_MODER |= 0x1<<21; // PA10 AF
					GPIOA_AFRH |= 0X7<<4; // AF7-UART1
					GPIOA_AFRH |= 0X7<<8; // AF7-UART1
					
					RCC_APB2ENR |= (0x1<<4);
					while(!(RCC_APB2ENR & (0x1<<4)));
	
}

void UART1_config()
{
					UART1_BRR |= 0X87; // 115200   
					UART1_CR1 |= 0X1<<2; //RECEIVER ENABLE
					UART1_CR1 |= 0X1<<3; //TRANSMITER ENABLE
					UART1_CR1 |= 0X1<<13; //USART ENABLE
}

void UART1_OUTCHAR(unsigned char a)
{
					while(!(UART1_SR & (0x01<<7)))
					{
						;
					}
					UART1_DR = a;
}

unsigned char  UART1_INCHAR(void)
{			
				while( ((UART1_SR & (0x1<<5))==0)) 
				{
					;
				}
				C = UART1_DR;
				return C;
}

unsigned char  UART1_INCHAR_TIMEOUT(void)
{				int count=1000;
				while( ((UART1_SR & (0x1<<5))==0)) 
				{
					count--; // if incase INCHAR always blocks
					if(count==0)
					return 1;	//avoid blocking 
				}
				C = UART1_DR;
				return C;
}
void UART1_OutString(char a[100])
{
				int i=0;
				for(i=0;a[i]!='\0';i++)
				{
				UART1_OUTCHAR(a[i]);
				}
}

int UART1_instring(void)
{
				char a[550];
				int i;
				for (i=0;i<300;i++)	
				{
						a[i]=  UART1_INCHAR();
						if(a[i-4]=='E' &&	a[i-3]=='R' &&	a[i-2]=='R' &&	a[i-1]=='O' &&	a[i]=='R')
								return 1;
						if(a[i-1]=='O' && a[i]=='K')
								return 0;
						if(a[i-3]=='F' &&	a[i-2]=='A' &&	a[i-1]=='I' &&	a[i]=='L')
								return 1;
				}
				return 1;
}

void error()
{
					LCD_WRITE_COMREG(0x01);//clear screen
					LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION 
					LCD_WRITE_STRING("RTC (OR) EEPROM ERROR");
					delaysec(5);
					main();
}

void error1()
{
					LCD_WRITE_COMREG(0x01);//clear screen
					LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION 
					LCD_WRITE_STRING("   WIFI FAIL");
					LCD_WRITE_COMREG(0xC0); //SET CURSOR POSITION
					LCD_WRITE_STRING("CHECK CONNECTION");
					delaysec(5);
					
					LCD_WRITE_COMREG(0x01);//clear screen
					LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION 
					LCD_WRITE_STRING("PROGRAM RESTART");
					delaysec(3);
					main();	//RESTART THE PROGRAM
}
//----------------------------------------------TASK-------------------------------------------------------

char Fetch[500]; //CLOUD TRANSMIT BUFF
int hum=29;
char a;
void initialization()
{				sys_tick_int();
				
				PORTC0_INT();
				ADC_int();
				
				I2C1_Initilization(); 
				I2C1_Configuration();

				PortB_Init(); //for LCD
				LCD_INITIALIZATION(); //INT LCD
				
				UART1_int();
				UART1_config();
	
				EEPROM_SW_INT();  // SW1--->RTC WRITE SW2---->EEPROM READ
}


void wifi_init()
{   
				UART1_OutString("AT\r\n");
															if(UART1_instring())
																	error1();
				delaysec(1);
				
				UART1_OutString("AT+RST\r\n");
															if(UART1_instring())
																	error1();						
				delaysec(1);
				UART1_OutString("AT+CWMODE=3\r\n") ;
															 if(UART1_instring())
																	error1();
				delaysec(1);
				UART1_OutString("AT+CWJAP=\"iotdata123\",\"12345678\"\r\n");
															
				delaysec(1);
				UART1_OutString("AT+CIFSR\r\n");
																if(UART1_instring())
															  		error1();//Print error message and restart the program from first line
				delaysec(1);
				UART1_OutString("AT+CIPMUX=0\r\n");
																if(UART1_instring())
																	error1();
				delaysec(1);
				UART1_OutString("AT+CWLAP\r\n");
																if(UART1_instring())
																	error1();
				delaysec(1);
				UART1_OutString("AT+CIPMODE=0\r\n");
																if(UART1_instring())
																	error1();//Print error message and restart the program from first line
				delaysec(1);
				LCD_WRITE_COMREG(0x01);//clear screen
				LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
}	

void TASK1()
{
				RTC_CLOCK_DISPLAY(x);	// TOTAL DISPLAY CONTENT x- display OK (or) ERROR
}			
void TASK2()
{			
				if((int_rtc[0]%5)==0) // if sec divide by 5 then execute
						{
							ADC1_CR2 |= (0x1<<30); //swstart
							while((ADC1_SR & 0X2))
									{
											temperature= (ADC1_DR*290)/4096; // 300---> VOLTAGE && 4096 = 2^12 RESOLUTION
									}
						}
}
int TASK4()
{		
				if((int_rtc[0]%5)==0) // if sec divide by 5 then execute
				{
						x=1; //set x=1 if task4 fail							
						UART1_OutString("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");				
														if(UART1_instring())
															return 1;			
						sprintf(Fetch,"GET /page.php?temp=%i&hum=%i&dev=4001\r\n\r\n", temperature,hum);
						delayms(50);
						UART1_OutString("AT+CIPSEND=41\r\n");				
						delayms(50);
						UART1_OutString(Fetch);										
						delayms(50);	
						UART1_OutString("AT+CIPCLOSE\r\n");
						x=0; // clear x if task4  success
				}							
				return 0;	
}	
void TASK3()
{
					if(temp_2_EEPROM()) //Store  data To EEPROM and Display it if SW2 Pressed
											error(); //Print error message and restart the program from first line
}

void welcome()
{
					LCD_WRITE_COMREG(0x01);//clear screen
					LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION 
					LCD_WRITE_STRING("  KM40BESD-01");
					LCD_WRITE_COMREG(0xC0); //SET CURSOR POSITION
					LCD_WRITE_STRING("   B.Vignesh");
					delaysec(1);
	
					LCD_WRITE_COMREG(0x01);//clear screen
					LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION 
					LCD_WRITE_STRING("IOT SMART WEATHER");
					LCD_WRITE_COMREG(0xC0); //SET CURSOR POSITION
					LCD_WRITE_STRING("  PROJECT V3.0");
					delaysec(1);
					
}



	