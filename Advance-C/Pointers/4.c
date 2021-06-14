//4. Declare 3 integer variables. Declare an integer pointer. 
//Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.


#include<stdio.h>
int main()
{
	int a,b,c,*ptr;

	a=5;b=10;c=15;
	ptr=&a;
		printf("a=%d\n",*ptr);
	ptr=&b;
		printf("b=%d\n",*ptr);
	ptr=&c;
		printf("c=%d\n",*ptr);

	}

