#include<stdio.h>
int call(int n)
{
	static int x;
	if(n==0 ||n==1)
	{
	//	printf("\n1\t1");
		return 1;
	}
	x= (call(n-1) + call(n-2));
//	printf("\t%x",x);
	return x;

}



void main()
{
	int a;
	printf("\nenter the Nth position: ");
	scanf("%d",&a);
	a=call(a);
	printf("\nFibonacci number for nth position :%d\n",a);

	return;
}
