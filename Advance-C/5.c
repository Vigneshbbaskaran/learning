//5. Declare 3 pointer variables of integer type, and an integer variable. 
//Assign the address of integer variable to the 3 pointers. 
//Print the variable value using indirection on each pointer variable. 
//Change the variable value directly and check the values of each of the pointers using indirection.
//Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.



#include<stdio.h>
int main()
{
	int a,*ptr1,*ptr2,*ptr3;
	a=1;
	ptr1=&a;
	ptr2=&a;
	ptr3=&a;

	printf("ptr1\nBefore pointer value:%d",*ptr1);
	printf("\nVar value:%d\n",a++);
	printf("Afterr pointer Value:%d\n\n",*ptr1);

	printf("ptr1\nBefore pointer value:%d",*ptr2);
	printf("\nVar value:%d\n",a++);
	printf("Afterr pointer Value:%d\n\n",*ptr2);

	printf("ptr1\nBefore pointer value:%d",*ptr3);
	printf("\nVar value:%d\n",a++);
	printf("Afterr pointer Value:%d\n\n",*ptr3);

}
