#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d", &a,&b,&c);

	printf("%d is the biggest number\n",a>b ? ( a>c? a:b):( b>c?  b:c) );
return 0;
}
