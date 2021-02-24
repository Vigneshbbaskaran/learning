#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value a and b\n");
	scanf("%d%d", &a,&b);
	a =a+b;
	b =a-b;
	a =a-b;
	printf("swaped values => a:%d and b:%d\n", a,b);
	return 0;
}
