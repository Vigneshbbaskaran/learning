/*
4      Write a program to read and print an integer using scanf and printf function pointers.
scanf and printf declarations are given below:
int printf(const char *,...);
int scanf(const char *,...);
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int (*my_io[])(const char *,...)={printf,scanf};
       
	int a,b,x,y;


	x=(*my_io[0])("Enter two numbers : \n");
	y=(*my_io[1])("%d%d",&a,&b);
	
		
	(*my_io[0])("successfull print:%d\nsuccessfull scan:%d\n",x,y);

	(*my_io[0])("scanned values:\n\t\ta : %d\n\t\tb : %d\n",a,b);
}

