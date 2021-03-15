//9)Modify the calculator program to perform the operations continuously until the user chooses not to continue further. 
//Take user's choice as a character y or n (yes or no).

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

