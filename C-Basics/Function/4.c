#include<stdio.h>
void isPrime(int);

int main()
{
	int a,b,i,c;
	printf("enter a two  numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++)
	{
		isPrime(i);
	}
printf("\n");



return 0;

}




void isPrime(int a)
{
	int temp=0,i;
        for(i=a-1;i>1;i--)   // a>1 to avoid divide by 1
        {
                if(a%i==0)
                {
			temp=1;
			break;
		}

	}
	if(temp==0)
	printf("\n%d",a);
	return ;
}