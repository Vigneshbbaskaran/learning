/*7) WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.
*/
#include<stdio.h>

#define isprime(a)  		 { int temp=1,i=a;\
        a--; \
        for(;a>1;a--)\
        {\
                if(i%a==0)\
                {\
                        temp =0;\
			break;\
                }\
        }\
	return temp;\
	}
int check(int a)
	isprime(a)
	
	
int main()
{
int a,i,j;

	printf("\nenter a number :\n");
	scanf("%d",&a);
	printf("prime numbers\n");
	for(j=2;j<=a;j++)
	{
		if(check(j))
			printf("%d\n",j);
	}
	
	return 0;
}
