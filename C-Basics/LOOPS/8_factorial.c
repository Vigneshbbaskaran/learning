//8)Write a program to find the factorial of a given number.
// n! = n * n-1 * n-2 * …. 2 * 1

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
