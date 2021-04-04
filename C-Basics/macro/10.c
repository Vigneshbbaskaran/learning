#include<stdio.h>

#define array(a,j)   for(i=0;i<j;i++)\
			{\
			printf("a[%d]:%d\n",i,a[i]);\
			temp+=a[i];\
			}     




int main()

{	
	int n;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n],i,temp=0;
	for(i=0;i<n;i++)
	{
	printf("\na[%d]:",i);
	scanf("%d",&a[i]);
	}
	printf("\nARRAY ELEMENTS\n");
	array(a,n);
	printf("sum : %d\n",temp);

	return 0;
}
