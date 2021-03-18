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
