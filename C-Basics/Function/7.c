//7)Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.
#include<stdio.h>
 int power(int,int);

 int main()
{
	int a,n,temp;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the power\n");
	scanf("%d",&n);

	temp=power(a,n);
	
	printf("%d to the power of %d = %d\n",a,n,temp);
	return 0;
}

int power (int a, int n)
{
	int i;
	if(n==0)
		return 1;
	for(i=1;i<n;i++)
	{
		a=a*a;
	}

	return a;
}
