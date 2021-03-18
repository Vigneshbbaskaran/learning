//2) Write a program to find out if an integer entered by a user is a prime number or not.

#include<stdio.h>
int main()
{
	int i,a,temp=0;
	printf("enter a prime number\n");
	scanf("%d",&a);
	i=a;
	a--; // to avoid divide by itself
	for(;a>1;a--)   // a>1 to avoid divide by 1
	{
		if(i%a==0)
		{
			temp =1;
			break;	
		}
	}
temp==0 ? printf("\nPrime number\n") : printf("\nNot a prime number\n");
return 0;
}
