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
