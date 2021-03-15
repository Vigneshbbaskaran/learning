#include<stdio.h>
int main()
{
	int i=0,a=1,sum=0,n;
	printf("enter te value for n:");
	scanf("%d",&n);
	printf("enter positive number:\n");
	while(i<n)
	{
		scanf("%d",&a);
		if(a>0)
		{
			sum=sum+a;
			i++;
		}
	}
	printf("sum=%d \n",sum);

	return 0;
}

