//9. WAP multiply a number by 9 using bit shift.
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	int temp;
	temp=a;

	temp=temp<<3;
	temp=temp+a;

	printf("%d*9 : %d\n",a,temp);

	return 0;
}


