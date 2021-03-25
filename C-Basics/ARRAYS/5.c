#include<stdio.h>
int main()
{
	int i,size;
	printf("enter the value for size\n");
	scanf("%d",&size);
	float a[size]={1,2,3};
	printf("enter values\n");
	for(i=0;i<size;i++)
	{
	scanf("%f",&a[i]);
	}
	for(i=0;i<size;i++)
        {
        printf("\na[%d] = %f",i,&a[i]);
        }
	printf("\n");
	return 0;
}

