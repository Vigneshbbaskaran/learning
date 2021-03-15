#include<stdio.h>
int main()
{
	int i=0,a=1,sum=0;
	printf("enter positive number:\n");
	while(a>0)
	{
		scanf("%d",&a);
		if(a>0)
		{
			sum=sum+a;
			i++;
		}
	}
	printf("sum=%d \ntotal number of positive numbers entered = %d\n",sum,i);

	return 0;
}

