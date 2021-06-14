//1. Write a program to print the address of a variable , its value ,its size, 
//try different executions and note the address printed. Assign the address of the variable to a pointer variable.
//Print the size of pointer and its indirected value (apply * operator).


#include<stdio.h>

int main()
{
	int a=5, *ptr;
	ptr=&a;

	printf("Address = %p\nSize = %ld\nValue =%d\n",ptr,sizeof(a),*ptr);
}

