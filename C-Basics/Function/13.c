#include<stdio.h>
int mul(int,int);
int main()
{
	int a,b,c;
	printf("enter two number:\n");
	scanf("%d%d",&a,&b);

	c = mul(a,b);

	printf("%d*%d = %d\n",a,b,c);

	return 0;
}

int mul (int a, int b)
{
	int i,temp=0;
	for(i=0;i<b;i++)
	{
	temp=temp+a;
	}

	return temp;
}

