//8. Take three input integers x,y and z. 
//Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. 
//Do this using pointers that point to x,y and z.


#include<stdio.h>
int main()
{
	int a,b,c,*x,*y,*z,temp;
	printf("enter three nubers\n");
	scanf("%d%d%d",&a,&b,&c);

		x=&a;
		y=&b;
		z=&c;
	//swap
		temp=*x;
		*x=*y;
		*y=*z;
		*z=temp;

		printf("swapped values:\na=%d\nb=%d\nc=%d\n",a,b,c);
}


