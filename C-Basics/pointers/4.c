#include<stdio.h>
int main()
{
	int i, a[10];
	int *p1[10];
	printf("ENTER VALUES\n");
	for(i=0;i<10;i++)
	{
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
	p1[i]=&a[i];
	}
	
	
	printf("\n\nENTERED VALUES\n");
	for(i=0;i<10;i++)
	{
	printf("a[%d]:\nvalue = %d\nAddress = %d\n\n",i,*p1[i],p1[i]);
	}



	return 0;
}
