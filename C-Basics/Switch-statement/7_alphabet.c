#include<stdio.h>
int main()
{
char a;
printf("enter a ALPHABET\n");
scanf("%c",&a);

switch((a<=122 && a>=97) || (a<=90 && a>=65))
{
case 1:
	printf("ALPHABET\n");
	break;
case 0:
	printf("NOT ALPHABET\n");
	break;
	
}

return 0;
}
