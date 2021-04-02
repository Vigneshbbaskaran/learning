/*4) Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).
*/
#include"header.h"

int main()
{
	int a,b;
	printf("\nenter a:");
	scanf("%d",&a);

	printf("\nenter b:");
	scanf("%d",&b);


	printf("\nADD:%d",ADD(a,b));
	printf("\nSUB:%d",SUB(a,b));
	printf("\nMUL:%d",MUL(a,b));
	printf("\nDIV:%d\n",DIV(a,b));
	return 0;
}

