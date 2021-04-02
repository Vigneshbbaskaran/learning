#include<stdio.h>
void swap(int a[2]);
int main()
{	
	int a[2];
	printf("\nenter a[0]:");
	scanf("%d",&a[0]);

	printf("\nenter a[1]:");
	scanf("%d",&a[1]);

	swap(a);

	printf("\na[0]=%d\na[1]=%d\n",a[0],a[1]);

	return ;
}


