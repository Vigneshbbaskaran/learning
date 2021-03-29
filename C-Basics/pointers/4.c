#include<stdio.h>
int main()
{
	int i, a[10];
	int *p1;
	printf("ENTER VALUES\n");
	for(i=0;i<10;i++)
	{
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
	
	}
	p1=&a[0];
	
	printf("\n\nENTERED VALUES\n");
	for(i=0;i<10;i++)
	{
	printf("a[%d]:\nvalue = %d\nAddress = %d\n\n",i,*p1,p1);
	p1++;
	}



	return 0;
}
