/*
5. Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.

eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.
*/


#include<stdio.h>
int* square(void);
void main()
{
	int *p;
	p=square();
	printf("square value :%d\n",*p);
}

int* square(void)
{
	static int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	a=a*a;
	return &a;
}

