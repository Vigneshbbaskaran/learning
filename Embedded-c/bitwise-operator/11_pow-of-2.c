//11. WAP whether a number is a power of 2 or not?
#include<stdio.h>

int main()
{
	int a,temp;
	printf("enter value\n");
	scanf("%d",&a);
	temp=a;
	int i,count=0;
	for(i=0;i<32;i++)
	{
		if(temp & (0x01<<31))
			count++;
		temp=temp<<1;
	}
	if(count==1)
		printf("%d is power of two\n",a);
	else
		printf("%d is not power of two\n",a);


	return 0;
}
