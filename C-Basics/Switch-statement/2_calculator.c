#include<stdio.h>
int main()
{
int a,b;
char c;
printf("\nallowed operators for calculation '+' '-' '*' '/'\n\nenter number in this Format: num1 'operator' numb2\n");
scanf("%d%c%d",&a,&c,&b);

switch(c)
{
case '+':
	printf("RESULT: %d\n",a+b);
	break;
case '-': 
	printf("RESULT: %d\n",a-b);
	break;	
case '*': 
	printf("RESULT: %d\n",a*b);
	break;
case '/': 
	printf("RESULT: %d\n",a/b);
	break;
default:
	printf("invalid input..!\n");
}
return 0;
}
