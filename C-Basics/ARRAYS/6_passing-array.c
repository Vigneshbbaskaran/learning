#include<stdio.h>
void sum(int c[5],int a[5],int b[5]);
int main()
{
	int a[5]={11,2,33,4,58};
	int b[5]={10,93,8,67,6};
	int i, c[5];
	sum(c,a,b);
	for(i=0;i<5;i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
	return 0;
}
	
void sum(int c[5],int a[5], int b[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		c[i] = a[i] + b[i];
	}

}
