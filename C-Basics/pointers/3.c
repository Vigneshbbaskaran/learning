#include<stdio.h>
int main()
{
	int x,y,z,temp;
	int *p1, *p2, *p3;
	
	printf("enter values:\nx= ");
	scanf("%d",&x);
	
	printf("enter values:\ny= ");
	scanf("%d",&y);
	
	printf("enter values:\nz= ");
	scanf("%d",&z);
	
	p1=&x;
	p2=&y;
	p3=&z;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = *p3;
	*p3 = temp;
	
	printf("\nx = %d\ny = %d\nz = %d\n",x,y,z);
	
	return 0;
}
