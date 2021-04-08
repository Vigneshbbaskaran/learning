//8. WAP to convert Little endian integer to Big endian integer 
#include<stdio.h>

int main()
{
	int a;
	printf("enter a(hex):\n");
	scanf("%x",&a);

	a = ( (a<<24)|(a>>24)| ( (a>>8) & (0x0000FF00) ) | ( (a<<8) & (0x00FF0000) ) );

	printf("\n");
	printf("\na:%x\n",a);
	return 0;
}
