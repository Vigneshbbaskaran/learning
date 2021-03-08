#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("enter floting-point number\n");
	scanf("%f",&b);
	a=b;
	a=a%10;
	printf("last digit :%d\n",a);
	return 0;
}
