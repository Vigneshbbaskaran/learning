/* 6)WaP to read few positive numbers from user until a negative number is entered by the user, 
and print the sum of the positive numbers. Also print the number of positive numbers entered by the user. */

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

