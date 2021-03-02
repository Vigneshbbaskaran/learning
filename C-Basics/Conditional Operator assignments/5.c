#include<stdio.h>
int main()
{
	char a;
	printf("enter a character \n");
	scanf("%c",&a);

	a=  a>=65 && a<=90 ? a+32 : a-32 ;
	printf("%c\n",a);

	return 0;
}
