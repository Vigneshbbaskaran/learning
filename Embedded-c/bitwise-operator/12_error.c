#include<stdio.h>

int main()
{
	int a,i,b=0,temp;
	printf("enter value\n");
	scanf("%d",&a);

	for(i=0;i<32;i++)  // Perform operation
	{
		if( (a & (0x01<<31) ) == (0x01<<31) )
		{
		 (b | (0x01<<31));
		printf("1");
		}
		b>>1;
		a<<1;	
		
	}

	printf("\n");
	printf("\na:%d\n",b);
	return 0;
}
