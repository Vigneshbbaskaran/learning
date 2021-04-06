/*1. Write a Macro's Set, clear and toggle n'th bit using bit wise operator?
*/
#include<stdio.h>
#define SET(data,bit)  (data | (0x01<< bit))
#define RESET(data,bit)  (data & ~(0x01<< bit))
#define TOGGLE(data,bit)  (data ^ (0x01<< bit))
int  main()
{
	int a,n;
	printf("enter the value\n");
	scanf("%d",&a);
	printf("enter the nth bit:\n");
	scanf("%d",&n);

	
	printf("SET:%d\n",SET(a,n));
	printf("RESET:%d\n",RESET(a,n));
	printf("TOGGLE:%d\n",TOGGLE(a,n));

	return 0;
}
	
