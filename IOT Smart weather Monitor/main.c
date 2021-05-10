void initialization();	//wifi.c
void welcome();					//wifi.c
void wifi_init();				//wifi.c
void TASK1(); 					//wifi.c
void TASK2();						//wifi.c
void TASK3();						//wifi.c
int TASK4();						//wifi.c


/*----------IOT SMART WEATHER PROJECT V3.0----------*/

int main()
{
		initialization(); 
		welcome();          // DISPLAY WELCOME MESSAGE 
		wifi_init();			  // SETUP-WIFI
		while(1)
						{				
						TASK1();	  // RTC DISPLAY
						TASK2();	  // ADC	every 5 sec				
						if(TASK4())	// if data send cloud Fails every 5sec		
								{
									TASK3();	// WRITE TO EEPROM min:sec temperature value
								}					
				}
}
