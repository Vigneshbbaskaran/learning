#include<stdio.h>
int main()
{
	int a;
	printf("enter a signed number\n");
	scanf("%d",&a);

	printf("%d\n",a<=0 ? (a*(-1)) : a) ;
	return 0;
}
