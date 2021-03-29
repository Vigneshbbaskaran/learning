# KM40BESD01 

# 'C' Programming Basics
# 28 MARCH 2021
## Strings Assignments
1)Write a function that takes a string as an input, and count the number of words in the string, and returns the number,  

2)Write a function that takes a string as input, and determines whether the string is a palindrome or not, returns 1 or 0.  

3)Write a function to replace a given character by another character in a string. The function takes one string, and 2 characters as input.  

4)WAP to display the word expansion of a number  
eg., Input : 789  
Output : Seven Eight Nine  

5)Write a trim() function,that will remove the leading and trailing spaces from a string.  
eg., Input : "    str  str   "  
Output : "str str  

6)Write a function called strstr that takes 2 strings as input,    
finds the first occurrence of second string, in the first string,  
and returns the index from where it starts in the first string. If the string is not found, returns -1.  
  
eg., Kernel Masters  
	Mast  
output : 7  

## Pointers Assignments

1)Write a program to take input for two character variables using pointers and find out and print which character has higher ascii value.  

2)Write a program to find the biggest of three numbers using pointers that point to those numbers.  

3)Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y,  
y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.  

4) Declare an integer array of size 10 and initialize it to some values.   
Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.  
# 25 MARCH 2021
## ARRAYS

1)	"Write the following program :   
Declare an integer array of size 100.  
Assign numbers 1-100 to each element of the array.  
Print all the numbers.  
Print all even elements.  
Print all odd elements.  
Add 5 to each element and print 6 – 105 numbers."  

2)	"Write the following program :  
Declare a character array without size.  
Initialize the array with characters of your name.  
Print your name using for loop."  

3)	Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print. 

4)	"Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>   
int arr[5] = {};   
int arr[10] = {2.4,5.6,7.3};  
int arr[3] = {1,2,3,4,5};  
int arr[0] = {};  
int arr[0] = {1,2,3,4,5};  
int arr[] = {};  
int arr[‘a’];"  

5)	"Write the following program.  
Declare an integer variable ‘size’.     
Take the value of ‘size’ from user using scanf.  
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)  
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.  
Using for loop, print the elements of the array."  

6)	Write a function to return the sum of all numbers in an integer array, sent as argument to the function.  

7)	Write a function to search for a specific element given by the user, in an array and return the index where it was found. The function will take the array and the number to search as arguments.  

8)	"Write a program to reverse an array and print it:    
Input : array1 ={1,2,3,4,5};  
Output : array1 = {5,4,3,2,1};"  

9)	Write a program to print an integer in binary format.  

10)	"Write a program to swap two arrays in reverse order."  
eg., array1 :  1 2 3 4 5  
array2 :  6 7 8 9 10  

after swapping output:   
array1: 10 9 8 7 6  
array2: 5 4 3 2 1  

# 23 MARCH 2021
## Super Market Problem Version-2

1) Stock variable should be restricted to stock file, and any modifications also should happen only in stock file. Only the functions should be accessible to other files.  

2) When the user chooses Sell the stock option, and there is not enough stock, then instead of cancelling the sales, 2 options will be displayed:  
i) Sell the existing stock  
ii) Cancel the sales  
  
The user can choose any one of the above options and close the transaction.  

3)When the user chooses Purchase New stock option, and there is not enough space, then instead of cancelling the purchase, 2 options will be displayed:  
i) Fill the godown  
ii) Cancel the purchase  

The user can choose any one of the above options and close the transaction.  

4) When user chooses quit,display the below report:  
i)  Latest Stock  
ii) Total number of times sales happened  
iii) Total number of items sold  
iv) Total number of times purchase happened  
v) Total number of items purchased  

5)Declare the commonly used function declarations and external variables in a header file,  
and include it in all the four source code files, using the below syntax :  

#include”SuperMarket.h”
# 22 MARCH 2021
## Storage Classes Assignments
Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.   

1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.  

2 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.  

3 ) Create the operand variables as global variables and the operator as an argument. result should be printed in function itself without returning.  


4)WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.  
Stock : Maintains a variable for available stock.  
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.  
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.  
SuperMarket : Display menu with choices :   
1 ) check AvailableStock   
2 ) Purchase new items   
3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit."    

5)WAP - with a function that prints the following message every nth time it is called : Hello! I am called nth time. Print the appropriate subscript after the n, depending on the last digit.  
Output : The function should print the following ,  
I am called 1st time.  
I am called 2nd time.``   
I am called 3rd time…etc.  
The subscripts also should be printed appropriately. (st, nd ,rd and th etc.).  
Hint : numbers ending with 1 will have st as subscript.  
Numbers ending with 2 will have nd as subscript.  
Similarly, numbers ending with 3 will have rd and all the remaining numbers will have th.  

# 20 MARCH 2021
## Date Comparison 
***Problem Description:***Write a program to read dates of birth of n candidates and choose who the elder is.  
Whenever a date is scanned, verify if it is valid date or not. If it is not a valid date, ask for another date, until the user enters a valid date. Print the elder date in the format dss Month-yyyy. (10M + 10M).

***Functions: Create the below functions along with main:***  
FileName: main.c  
1)	main function    

FileName: isvaliddate.c  

2) int  IsValidDate(int  d, int  m, int  y); // validates the date     
3) int  IsLeapYear(int  y); // checks if a year is leap year or not      

FileName: compare.c  

4) int  DateCompare(int  d1,int  m1,int  y1,int  d2,int  m2,int  y2); // compares 2 dates   

FileName: print.c  

5) void PrintDateinFormat(int  d,int  m,int  y); // prints the given date in ddss Month-yyyy format     
6) void PrintSubscript(int d); // prints the subscript for the date in above date format( th, rd or st).      

Example Input:    

Number of candidates: 5  
Date of birth of candidate#1: 3-4-2002  
Date of birth of candidate#2: 4 3 2001  
Date of birth of candidate#3: 29 2 2007  
Date is invalid, plz enter valid date : 31 4 2007  
Date is invalid, plz enter valid date : 30 4 2006  
Date of birth of candidate#4: 30 6 2003  
Date of birth of candidate#5: 29 2 2004  

Output: The candidate born on 4th March-2002 is elder of all  

# 17 MARCH 2021
## FUNCTIONS Assiments

1)Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.  
Hint: int add(int , int);   
int sub (int, int);  

2)Write a function ,that can take two integers, swap their values and print their new values.return type should be void.  

3)write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
return type is integer.  
IsPrime - returns int (0,1)  

4)Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above.return type should be void.  
PrintAllPrimes - return type is void. Should use IsPrime()  
  
5)Write a function that takes an integer parameter and prints its multiplication table.return type should be void.  

6)Write a function to determine if a character is alphanumeric or not.   
Hint: int fun_alpha_num(char c)  
  
7)Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.  

8)Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.  
  
9)Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older. Print appropriate message.  
  
10)Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.  
  
11)Write a function to accept a date and validate the date.  
  
12)Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.
char CaseReverse(char );  

13)Write a function to return the product of two numbers without using * operator.  

# 16 MARCH 2021
## LOOPS-1 assignment
1)Write a program to input n numbers and print the largest and smallest numbers out of them.  
  
Eg., 3,23,56,34,78,45,26,90,68,77  
Biggest Number is 90  
Smallest Number is 3  
   
2) Write a program to find out if an integer entered by a user is a prime number or not.  
3)using while ,do while and for loops  
    *  
    * *  
    * * *  
    * * * *  
    * * * * *  
4)  
1  
2 2  
3 3 3  
4 4 4 4  
5 5 5 5 5  

5)  
1  
1 2  
1 2 3  
1 2 3 4  
1 2 3 4 5  
  
6)  
1  
0 1  
1 0 1  
0 1 0 1  
1 0 1 0 1  
  
7)  
5  
4 4  
3 3 3  
2 2 2 2  
1 1 1 1 1  
  
8)  
5  
5 4  
5 4 3  
5 4 3 2  
5 4 3 2 1  
  
9)  
1  
2    3  
4    5   6  
7    8   9    10  
11   12  13   14  15  
  
10)without using nested loops( Using only 1 loop)  
    *  
    * *  
    * * *  
    * * * *  
    * * * * *  
  
11)Write a program to input a number and count the digits in it.  
Eg.   
0 - number of digits 1  
12 – number of digits 2  
155 – number of digits 3  

12)Find the quotient result of a division operation for 2 input integers, without using / operator. Also print reminder without using % operator.  

14) Write a program to find out if an integer entered by a user is a prime number or not using factor counting method.  

15) Write a program to find out if an integer entered by a user is a prime number or not using break statement.  

16)"Write a program to print the first n Fibonacci numbers.  
 
Eg., First 8 Fibonacci numbers are :  
1  1  2  3  5  8  13  21 "  
  
17)Write a program to find the reverse of an integer.  


# 15 MARCH 2021
## Loops assignments

1)WaP to print all numbers from 1 to n.  
2)WaP to print all odd numbers and even numbers between 2 given numbers.  
3) Read a number and print its multiplication table.  
4)WaP to read n numbers from user and print their sum.  
5)WaP to read n numbers from user and print the sum of positive numbers and sum of negative numbers seperately.  
6)WaP to read few positive numbers from user until a negative number is entered by the user, and print the sum of the positive numbers. Also print the number of positive numbers entered by the user.  
7)WaP to read few numbers and keep reading until exactly n positive numbers are entered by the user, and print the sum of positive numbers.  
eg., n = 5  
input : 1  -2  -3   4  -5  -3   7   8  -1  -4  -5   9  
output: 29  
8)Write a program to find the factorial of a given number.  
n! = n * n-1 * n-2 * …. 2 * 1  
9)Modify the calculator program to perform the operations continuously until the user chooses not to continue further. Take user's choice as a character y or n (yes or no).  
10)WaP to calculate the product of 2 numbers without using multipliction operator (*).  
eg., input : 4 5  
output : 20 (should be calculated in a repetitive addition method)  
11)WaP to calculate the power of a number raised to another integer without using any readymade features.  
eg., input: 4 5  
output: 1024 (should be calculated in a repetitive product method)  

# 8 March 2021

1)Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.  
(Eg: User enters, 456.789, the output should be 6, which is last digit of the integral part of the number).  

2)Extend the percentage marks program to print the percentage in floating point representation with 2 digit precision

# 3rd MARCH 2021
# Switch statement assignments

***1)*** C program to check whether a character is vowel or consonant using switch statement.  
***2)*** Write the calculator program using switch case statement.  
***3)***"Convert the percentage marks program to print the grade of the student as per below division , using switch statement.  
80 - 100        : Honours  
60 - 79         : First Division  
50 - 59         : Second Division  
40 - 49         : Third Division  
0 - 39          : Fail"  
***4)*** C program to check whether a number is odd or even using switch statement  
***5)*** C program to find biggest of two numbers using switch statement  
***6)*** check if a character is vowel or not using switch statement  
***7)*** check if a character is alphabet or not using switch statement.  

# 2nd MARCH 2021
# Conditional Operator assignments


***1***	Write a program to find the biggest of two numbers using conditional operator.  
***2***	Write a program to find the biggest of three numbers using conditional operator.  
***3***	Write a program that determines whether a given integer is odd or even and displays the appropriate message.  
***4***	For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.  
***5***	Input an alphabet. Output its case reverse.  
***6***	Take an integer as input and print its magnitude (remove sign).  
***7***	check if a character is alphabet or not  
***8***	check if a character is vowel or not  
***9***	check if an year is leap year or not.  

## 1st MARCH 2021
## LOGICAL STATEMENTS
***1)***Write a Program to check if a character is vowel or not  
***2)***check if a character is alphabet or not  
***3)***Take an integer as input and print its magnitude (remove sign).  
***4)***check if an year is leap year or not.  
***5)***Input an alphabet. Output its case reverse.  
***6)***Write a program to read 2 dates (day, month & year of 2 dates) ,and compare them and print which date is older.  
eg., input date 1:  3-3-2000  
input date 2: 2-3-2000  
output: 2-3-2000 is older date  
        
## 26 FEB 2021
## Conditional Statements

***1)***Write a program to find the biggest of 2 nmbers.
input : -5 -9
output : -5 is biggest

input: 15 11
output : 15 is biggest

***2)*** Write a program to find if a given integer is even number or odd number.

input : 5
output: 5 is odd number

input : 12
output : 12 is even number

***3)***Write a program to find the biggest of three numbers using if else statements.

input : 6 7 3
output : 7

***4)C*** program to check whether a number is positive, negative or zero.

input : -7
output : given number is negative

input: 4
output : given number is positive

***5)***Write a program to find the biggest of four numbers.

input : 1 1 5 -18
output : 5

***6)***Write a calculator program that takes two integer numbers from user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else.

eg., input : 3 + 4
output : 7
input: 8 - 9
output : -1
input: 5 / 2
output : 2
input: 5% 2
output: 1

***7)***Find the power bill for the input number of units :  
0 - 200 units : 100/- min  
201 - 400 units : 100 + 0.65 per unit excess of 200  
401 - 600 units : 230 + 0.80 per unit excess of 400  
601 and above units : 390 + 1.00 per unit excess of 600  

input : number of units : 225
output : 116.25 /-

***8)***Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.  
80 - 100        : Honours  
60 - 79         : First Division  
50 - 59         : Second Division  
40 - 49         : Third Division    
0 - 39          : Fail  
eg., input : 66 88 76 47 80 71  
percentage : 71.33%  
Grade : First Division  


## 25TH FEB 2021
## LAB_TEST
An ATM gives money in denominations of 2000,500, 200, 100 & 50/- . Given an amount as input, print how many notes of each denomination will be released. this program will work only for amounts entered in multiples of 50.

***input*** : 22350

***output*** : 2000/- notes: 11  
         500/- notes: 0  
         200/- notes: 1  
         100/- notes: 1  
         50/- notes: 1  
         
## ASSIGNMENT QUESTION
### Variables & DataTypes 
***1)***Read a character and print its ascii value, and vice versa.  
***2)***Input 3 digits, read them into three different characters. Make one integer out of them and display.  
Eg., input 345. char c =‘3’,b=‘4’,d=‘5’.   
Output : int i = 345.
Hint : Find how you can convert a digital character to its equivalent integer digit and add its place value.  

***3)***Read a 4 digit number and print it in the below format witout using any operators (use escape sequences).  
input : 4534  

output : 4  
         45  
         453  
         4534
         

## 24th FEB 2021
### Arithmetic operators

**1)**"read a 4 digit number and print it in the following formats:  
eg., 4532  
**OP1:** 

2  
3  
5  
4

**OP2:**

4  
5  
3  
2

**OP3:**

4  
45  
453  
4532

**OP4:**

4532  
453  
45  
4


**2)** Write a program to swap the values of 2 numbers.   
*eg., a = 4 , b=5
op: a=5 , b=4*

**3)** Write a program to rotate the values in 3 variables.  
*eg., a=3, b=5 , c = 8
OP: a =5, b = 8, c = 3*


## 23rd FEB 2021
### Variables input & output

**1)** List out the data types, their format specifiers. 

**2)**try input and output on different variables,create variables and then formatted output and inputs, print some expressions with arithmetic operations 

**3)**Calculation of simple interest.

**4)**calculate of average of 4 numbers & print.

**5)**calculate area and perimeter of rectangle

**6)**calculate area and perimeter of square 

**7)**calculate area and perimeter of circle

**8)**If sales price and profit of n items is given find the cost price of 1 item.



## 22nd FEB 2021
### C-Basics

**1)** Notedown all keywords 

**2)** write the basic hello world program and practice the compilation instructions ,
with and without -o option, and make some changes to code and generate error/warning messages.

## 8 FEB 2021
### 8085 ALP PROGRAM  
1. To find Odd No or Even No:
Write an ALP to find given number is odd or even and load number in 4000H memory
location the result stored in 6000H. If even, store 22H at memory location 6000 otherwise
store 11H at memory location 6000.
2. Data transfer memory to memory:
Write an ALP to 16 bytes of data stored in memory locations at 2000H to 200FH. Transfer
the entire block of data to new memory locations starting at 4000H.
3. To Perform Multiplication without using MUL instruction:
Write an ALP to perform multiplication of two numbers without using MUL instruction first
& second number stored in 4000H & 4001H memory locations respectively and the result
stored in 6000H?
4. To Perform Division without using DIV instruction:
Write an ALP to perform division of two numbers without using DIV instruction first &
second number stored in 4000H & 4001H memory locations respectively and the result
stored in 6000H?
5. To find average of 5 Numbers:
Write an ALP average of 5 numbers takes the numbers from 4000H to 4004H location and
store the result in 4005H?
6. To Perform PUSH without using PUSH instruction:
Write an ALP if there is no PUSH instruction and implement same with two instructions
which perform same operation as PUSH B?
7. Count No. of 1’s:
Write an ALP count no. of 1’s and load number in 4000H memory location the results stored
in 6000H?
8. To Perform power of 2:
Write an ALP to find the given number is power 2 and load number in 4000H memory
location the result stored in 6000H? (If given no is power of 2, store 22H at memory location
6000




 
