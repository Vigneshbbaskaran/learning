#include<stdio.h>
int call(int a)
{	static int b=1;
	if(a==0)
		return b;
	printf("\ntest:\n\ta:%d\n\tb:%d",a,b);
	b *= a;
	return call(a-1);
}
int main()
{	int a;
	printf("\nEnter the number: ");
	scanf("%d",&a);
	a=call(a);
	printf("\nfactorial :%d\n",a);

}

