#include<stdio.h>
void swap_reverse(int a[5],int b[5]);
int main()
{
	int i,a[5],b[5];
	
	for(i=0;i<5;i++)
	{
		printf("\na[%d]	= ", i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
        {
                printf("\nb[%d] = ", i);
                scanf("%d",&b[i]);
        }

	swap_reverse(a,b);
	
	for(i=0;i<5;i++)
	{
		printf("\na[%d] = %d\n",i,a[i]);
	}
	for(i=0;i<5;i++)
        {
                printf("\nb[%d] = %d\n",i,b[i]);
        }
	return 0;
}
void swap_reverse( int a[5],int b[5])
{

	int i,j=4,c[5],d[5];
	for (i=0;i<5;i++) // taking reverse copy
	{
		c[j-i]=	a[i];
		d[j-i]= b[i];
	}
	for(i=0;i<5;i++) // swapping reverse copy
	{
		b[i]=c[i];
		a[i]=d[i];
	}

}
