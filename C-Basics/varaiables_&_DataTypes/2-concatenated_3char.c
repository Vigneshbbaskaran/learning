#include<stdio.h>
int main()
{
	int temp,a1,b1,c1;
	char a,b,c;
	printf("enter a character number\n");
	scanf("%c",&a);
	printf("enter a character number\n");
	scanf(" %c",&b);
	printf("enter a character number\n");
	scanf(" %c",&c);
	a1=a-48; 
	b1=b-48;
	c1=c-48;
	temp =(a1*100)+(b1*10)+(c1*1) ;
	printf("\nconcatenated value: %d\n" ,temp);
	return 0;
}


