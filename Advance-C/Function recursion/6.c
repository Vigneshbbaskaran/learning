#include<stdio.h>
int call(int a)
{	static int y;
	if(a==0)
		return y;
//	printf("\nbefore\n\ta:%d\n",a);
	a=a/10;
	y++;
//	printf("\nafter:\n\ta:%d\n\ty:%d",a,y);

	return call(a);
}
int main()
{	int a;
	printf("\nEnter the number: ");
	scanf("%d",&a);
	a=call(a);
	printf("\nTotal no of Digits :%d\n",a);

}

