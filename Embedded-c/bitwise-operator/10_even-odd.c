//10. WAP whether a number is ODD or EVEN using bitwise.
#include<stdio.h>

int main()
{
	int a;
	printf("enter value\n");
	scanf("%d",&a);

		if(a & 0x01)
			printf("odd\n");

		else
			printf("even\n");
		

	return 0;
}
