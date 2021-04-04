#include<stdio.h>

#define array(a,j)   for(i=0;i<j;i++)\
			printf("a[%d]:%d\n",i,a[i]);     




int main()

{
	int a[10],n,i;
	for(i=0;i<10;i++)
	{
	printf("\na[%d]:",i);
	scanf("%d",&a[i]);
	}
	printf("\nARRAY ELEMENTS\n");
	array(a,10);

	return 0;
}
