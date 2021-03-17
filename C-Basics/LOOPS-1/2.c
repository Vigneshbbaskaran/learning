#include<stdio.h>
int main()
{
	int i,a,temp=0;
	printf("enter a prime number\n");
	scanf("%d",&a);
	i=a;
	a--; // to avoid divide by itself
	for(;a>1;a--)   // a>1 to avoid divide by 1
	{
		if(i%a==0)
		{
		
			printf("divisible by: %d\n",a);
			temp =1;
			
		}
	}
temp==0 ? printf("\nPrime number\n") : printf("\nNot a prime number\n");
return 0;
}
