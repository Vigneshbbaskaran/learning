#include<stdio.h>
int main()
{
	int a,n,i=0,temp=0;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("enter %d numbers\n",n);
	while(i<n)
	{
		scanf("%d",&a);
		temp=temp+a;
		i++;
	}
	printf("sum of %d numbers =%d\n",n,temp);
	return 0;
}

	

