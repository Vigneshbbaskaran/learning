#include<stdio.h>
int main()
{
	int i,a[10]={1,2,3,4,5,6,7};
	int *ptr;
	ptr=a;

	for(i=0;i<10;i++)
		printf("Address of a[%d]=%p\nValue=%d\n\n",i,ptr+i,*(ptr+i));
}
