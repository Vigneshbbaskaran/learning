//9. Declare an integer array of size 10 and initialize it to some values. 
//Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

#include<stdio.h>
int main()
{
	int i,a[10]={1,2,3,4,5,6,7};
	int *ptr;
	ptr=a;

	for(i=0;i<10;i++)
		printf("Address of a[%d]=%p\nValue=%d\n\n",i,ptr+i,*(ptr+i));
}
