//2. WAP print binary?
#include<stdio.h>

int main()
{
	int a;
	printf("enter value\n");
	scanf("%d",&a);
	


printf("binary value:\n");
	int i;
	for(i=0;i<32;i++)
	{
		if(a & (0x01<<31))
			printf("1");

		else
			printf("0");
		a=a<<1;
	}

	return 0;
}
