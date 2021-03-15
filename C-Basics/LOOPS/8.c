#include<stdio.h>
int main()
{
	int temp=1,a;
	printf("enter number to find factorial\n");
	scanf("%d",&a);
	while(a>0)
	{
		temp=temp*a;
		a--;
	}
	printf("factorial= %d\n",temp);
	return 0;
}
