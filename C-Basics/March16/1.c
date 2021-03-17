#include<stdio.h>
int main()
{
	int i,a,temp=0;
	printf("enter a prime number\n");
	scanf("%d",&a);
	i=a;
	a--;
	for(;a>1;a--)
	{
		if(i%a==0)
		{
		
			printf("a=%d i=%d ",a,i);
			temp =1;
			break;
		}
	}
temp==0 ? printf("prime number\n") : printf("not a prime number\n");
return 0;
}
