#include<stdio.h>
void calc(int a,int b,int *sum, int *mul, int *qu, int *remain);
int main()
{
	int a,b,sum,sub,mul,qu,remain;
	printf("\nenter a: ");
        scanf("%d",&a);

	printf("\nenter b: ");
	scanf("%d",&b);

	calc(a,b,&sum,&mul,&qu,&remain);
	
	printf("\nRESULT:\na:%d\tb:%d\nsum :%d\nmul :%d\nquotient :%d\nremain :%d\n",a,b,sum,mul,qu,remain);
	
	return 0;
}

void calc(int a,int b,int *sum, int *mul, int *qu, int *remain)
{
	*sum = a+b;
	*mul = a*b;
	*qu  = a/b;
     *remain = a%b;
return;
}


