#include<stdio.h>
void swap(int *x,int *y,int *z);
int main()
{
	int a,b,c;
	a=3;b=4;c=5;
	printf("Before swapping\na:%d\nb:%d\nc:%d\n",a,b,c);
	swap(&a,&b,&c);

	printf("After swapping\na:%d\nb:%d\nc:%d\n",a,b,c);
}
void swap(int *x,int *y,int *z)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
}
