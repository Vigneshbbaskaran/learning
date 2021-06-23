#include<stdio.h>
int call(int x,int n)
{	static int y=1;
	if(n==0)
		return y;
//	printf("\nbefore:\t\ty:%d\tn:%d",y,n);
	y= y * x;
//	printf("\nafter:\t\ty:%d\tn:%d",y,n);

	return call(x,(n-1));
}
int main()
{	int x,n;
	printf("\nEnter x: ");
	scanf("%d",&x);
	
	printf("\nEnter n: ");
	scanf("%d",&n);
	printf("\nx^n :%d\n",call(x,n));

}

