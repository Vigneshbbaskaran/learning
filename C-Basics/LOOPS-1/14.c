//2) Write a program to find out if an integer entered by a user is a prime number or not.

#include<stdio.h>
int main()
{
	int i,a,temp=0,count=0;
	printf("enter a prime number\n");
	scanf("%d",&a);
	i=a;
	a--; // to avoid divide by itself
	for(;a>1;a--)   // a>1 to avoid divide by 1
	{
		if(i%a==0)
		{
			temp =1;
			count++;	
		}
	}
temp==0 ? printf("\nPrime number\nTotal number of factors = 2\n") : printf("\nNot a prime number\nTotal number of factors = %d\n",count+2);
return 0;
}
