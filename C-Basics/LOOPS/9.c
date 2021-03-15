#include<stdio.h>
int main()
{
int a,b;
char c,i='y';
while(i=='y')
{
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
printf("want to calculate again ?? y/n:  ");
scanf(" %c",&i);
}
return 0;
}

