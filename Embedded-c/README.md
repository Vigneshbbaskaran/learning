# VIGNESH BASKARAN

# EMBEDDED C

# 7th May 2021
## IoT Project – Real Time Smart Weather Monitoring System

1. Write an Embedded C program for below 
tasks.
 * Task 1: Read date and time from DS1307 RTC and write in to LCD every 1 sec delay.
 * Task 2: Read temperature value from LM35 Temperature sensor every 5 sec delay.
 * Task 3: Write temperatur evalue along with time stamp in to EEPROM whenever internet is not working.
 * Task 4: Write temperature value into LCD and send to Kernel Masters web server using ESP8266 Wi-Fi Module.

# 29th April 2021
## I2C Communication Protocol

1. Write a Pseudo code, draw flow chart and write Embedded C Program to scan I2C devices and show the list of founded devices? Use Polling method. Set I2C clock frequency 100KHZ & Master mode.
2. Write a Pseudo code, draw flow chart and write Embedded C Program to Write current date and time in RTC and read same date from RTC using I2C1 Controller?  
Use Polling method. Set I2C clock frequency 100KHZ & Master mode.
3. Write a Pseudo code, draw flow chart and write Embedded C Program to Write “Kernel Masters” in to EEPROM device and read “Kernel Maters” from EEPROM using I2C1 Controller?  Use Polling method. Set I2C clock frequency 100KHZ & Master mode.

# 26th April 2021
## IoT Project - Smart Weather Monitoring System (or) Smart Data Logger

1. Write an Embedded C program and read temperature value from LM35 Temperature sensor every 5 sec delay and send to LCD and Kernel Masters web server.  

# 25th April 2021
## USART Communication Protocol-3

1. Write an Embedded C program and send temperature, humidity and device ID to Kernel Masters server using UART1 communication protocol. Configure UART1 to 115200 8N1.

# 23rd April 2021
## USART Communication Protocol-2

1. USART Polling : Write an Embedded C program to configure UART6 to 9600 8N1 and transmit character 'A' and receive same character using loopback method. Do the following config.
 * System clock initialization.
 * 9600 8N1
 <pre>
    Assign a hardware breakpoint in UART1_ISR and run program. Send 'A' from Tera term application.
 </pre>
2. USART Interrupt : Write a Pseudo code and Embedded C program to USAR6 Configuration using the below conditions.
 * System Clock Initialization to 16MHZ
 * 9600 8N1  (1+8+0+1=10 bits)
 <pre>
    Assign a hardware breakpoint in UART1_ISR and run program. Send 'A' from Tera term application. Verify result in ISR.
 </pre>
3. Develop communication between two Raayan Mini boards using UART6 protocol. The switches (PC9 and PC8) are inputs. LED (PC5 and PA8) are outputs, UART to communicate.

# 22nd April 2021
## USART Communication Protocol

1. Write an Embedded C program to configure USART6 to 9600 8N1 and transmit 'A' and receive the same using the loopback method.

# 21st April 2021
## ADC_Temp_Sensor

1. Write an Embedded C program to initialize ADC Single Conversion mode. Using regular channel software trigger, sample ADC channel 10 and store result to global variable that can be accessed with ST-Link Debugger.
    * Polling Method
    * Interrupt Method
2. Write an Embedded C program to read temperature value from ADC channel 0 and send data into LCD with degree centigrade.

# 20th April 2021
## Sys Tick Timer

1. Toggles PC5 (RED LED) every 100msec delay using SysTick timer With Polling using 16MHZ  system clock source. And also test minimum and maximum delays of 16MHZ timer.
2. Toggles PC5 (RED LED) every 100msec delay using SysTick timer With Interrupt using 16MHZ system clock source.
3. Implement delay generic functions using 16MHZ SysTick timer with polling method. 
<pre>
    Void KM_Delayms(int );
    Void KM_Delayus(int );
</pre>

# 19th April 2021
## LCD Display

1. Print characters on LCD Display.
2. Print a string on LCD Display.


# 18th APRIL 2021
## Class room example:
Write a program Request and interrupt on the falling edge of PA0 (when the user button is pressed) and
increment a counter in the interrupt. 

## Lab Assignment experiment 8: 
Write a program Request and interrupt on the falling edge of PC8 (whenever SW1 is pressed) then toggle RED LED (PC5) and falling edge of PC9 (whenever SW2 is pressed) then toggle GREEN LED (PA8)
increment a counter in the interrupt. 


# 16th APRIL 2021
## Experiment 3: 
Whenever SW1 is pressed RED LED is ON,
whenever SW2 is pressed GREEN LED is ON.
Assign breakpoints after if condition and click run button in debugger window. 
Whenever SW1/SW2 presses program stops at any one of the breakpoint.

## Experiment 4: 
Use “WAKEUP SWITCH” and declare “counter” global variable. 
Your program should increment counter by one, every time switch is pressed.
Note how the value of counter changes on each “WAKEUP SWITCH” press. 
Use debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?
Note: Define counter as a global variable and in debug perspective use continuous refresh option
(You will find Continuous Refresh button on top of the Expression Window). 
 You can use step debugging or breakpoints to check the variable value. 
Hint: To add variable to Expression Window,
select and right click the variable name and select “Add Watch Expression”. 
To view Expression Window, click on View button from Keil menu bar and select Expressions.

## Experiment 5: 
Whenever WAKEUP SWITCH is Press toggle RED LED.

## Experiment 6: 
Read WAKEUP SWITCH, if switch is press RED LED is ON otherwise RED LED is OFF.
Note that RED LED should remain ON for the duration switch is kept pressed 
i.e. RED LED should turn OFF when switch is released.

## Experiment 7: 
Whenever WAKEUP SWITCH Press turn ON BUZZER up to 250msec and Turn OFF BUZZER.

# 15th APRIL 2021
## Experiment 1: 
Toggle RED LED (PC5) ON time is 50ms and RED LED (PC5) OFF time is 1300ms.

## Experiment 2: 
Airplane wing Lights blinking Delays: 
USER LED1 (GREEN – PA8): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically. 
USER LED2 (RED – PC5): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.
# 10th APRIL 2021

## Write your own implementation of the below C Library functions using Keil Simulator.
1.	atoi() – asci to integer
2.	itoa() – integer to ascii
3.	strlen – string length
4.	strrev – string reverse
5.	strcpy – string copy
6.	strcmp – string comparison
7.	strcat – string concatenation (append source string at the end of destination  string)
8.	strchr – find the index of first occurrence of a character in a string
9.	strstr –find the index of first occurrence of a substring in a string
10.	strreplace- replace a substring with another substring of same length in a string.

# 8th APRIL 2021
## Debug the below programs using gdb.
### Control statements
1. gdb_sample.c: class room example program, attached this mail.   
2. % grading with % as float.  
3. Find biggest of n numbers, without using arrays.  
  
### Pointers  
4. call by value  
5. call by reference  

### Storage Classes/Functions 
6. Super Market  

### Strings 
7. strstr() - sub string finding  
 
# 6th APRIL 2021
## Bitwise Operators Assignments
1. Write a Macro's Set, clear and toggle n'th bit using bit wise operator?
2. WAP print binary?
3. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
4. WAP implement subtraction functionality with out using SUB('-') Operator.    
5. WAP implement addition functionality with out using ADD('+') Operator.   
6. WAP implement XOR functionality with out using XOR(^) operator.
7. WAP to implement the sizeof operation using the bitwise operator.  
8. WAP to convert Little endian integer to Big endian integer 
9. WAP multiply a number by 9 using bit shift.
10. WAP whether a number is ODD or EVEN using bitwise.
11. WAP whether a number is a power of 2 or not?
12. WAP print reverse of integer number? 
13. WAP Check if the 20th bit of a 32-bit integer is on or off?
14. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.  
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then  
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer  
10111010.Your answer should print out the result in binary form although input can be in  
decimal form.  
Your output should be like this:    
x = 10101010 (binary)  
y = 10100111 (binary)  
setbits n = 3, p = 6 gives x = 10111010 (binary).    

15. WAP Swap any two numbers using bitwise operators. How does it work?  

