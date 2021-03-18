#include<stdio.h>
int main()
{
	int a,b,c,temp,i;
	c=1;
	b=a=0;
	printf("enter a number\n");
	scanf("%d",&temp);
	for(i=0;i<temp;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;

	
	}
	return 0;
}
