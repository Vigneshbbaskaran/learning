/*
3)write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
return type is integer.
IsPrime - returns int (0,1)
*/
#include<stdio.h>
int prime(int);

int main()
{
	int a,temp;
	printf("enter a prime number\n");
	scanf("%d",&a);
	temp= prime(a);

	temp==0 ? printf("\nPrime number\n") : printf("\nNot a prime number\n");
return 0;
}

int prime(int a)
{
	int temp=0,i=a;
        a--; // to avoid divide by itself
        for(;a>1;a--)   // a>1 to avoid divide by 1
        {
                if(i%a==0)
                {
                        temp =1;
			break;
                }
        }
	return temp;
}
