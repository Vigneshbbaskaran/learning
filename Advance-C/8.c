#include<stdio.h>
int main()
{
	int a,b,c,*x,*y,*z,temp;
	printf("enter three nubers\n");
	scanf("%d%d%d",&a,&b,&c);

		x=&a;
		y=&b;
		z=&c;
	//swap
		temp=*x;
		*x=*y;
		*y=*z;
		*z=temp;

		printf("swapped values:\na=%d\nb=%d\nc=%d\n",a,b,c);
}


