#include<stdio.h>

int main()
{
	int a,i,b=0,temp;
	printf("enter value\n");
	scanf("%d",&a);
	printf("entered binary value\n");
	for(i=0;i<32;i++)
	{
		if(a & (0x01<<31))
			printf("1");

		else
			printf("0");
		a=a<<1;
	}

	for(i=0;i<32;i++)  // Perform operation
	{
		if( (a & (0x01<<31) ) == (0x01<<31) )
		{
		 b=(b | (0x01<<31));
		printf("1");
		}
		b=b>>1;
		a=a<<1;	
		
	}
	
	printf("\nafter reverse\n");
	for(i=0;i<32;i++)
	{
		if(a & (0x01<<31))
			printf("1");

		else
			printf("0");
		a=a<<1;
	}


	printf("\n");
	printf("\nb:%d\n",b);
	return 0;
}
