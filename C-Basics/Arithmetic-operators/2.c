#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value a and b\n");
	scanf("%d%d", &a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("swaped values => a:%d and b:%d\n", a,b);
	return 0;
}
