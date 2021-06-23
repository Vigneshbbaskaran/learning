#include<stdio.h>
int call(int a)
{	static int b;
	if(a==0)
		return b;
//	printf("\ntest:\n\ta:%d\n\tb:%d",a,b);
	b=(b*10)+(a%10);
	a=a/10;
	return call(a);
}
int main()
{	int a;
	printf("\nEnter the number: ");
	scanf("%d",&a);
	a=call(a);
	printf("\nREVERSE :%d\n",a);

}

