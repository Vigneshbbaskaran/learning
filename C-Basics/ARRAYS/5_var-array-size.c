#include<stdio.h>
int main()
{
	int i,size;
	printf("enter the value for size\n");
	scanf("%d",&size);
	int  a[size];
	printf("enter values\n");
	for(i=0;i<size;i++)
	{
	printf("a[%d] =",i);
	scanf("%d",&a[i]);
	}
	printf("\noutput");
	for(i=0;i<size;i++)
        {
        printf("\na[%d] = %d",i,a[i]);
        }
	printf("\n");
	return 0;
}

