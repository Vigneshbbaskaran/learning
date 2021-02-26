#include<stdio.h>
int main()
{
char o;
int a,b,temp;
printf("\nallowed operators for calculation '+' '-' '*' '/'\n\nenter number in this Format: num1 'operator' numb2\n");
scanf("%d%c%d",&a,&o,&b);

if(o=='+')
	printf("Result:%d\n",a+b);
else if(o=='-')
	printf("Result:%d\n",a-b);
else if(o=='*')
	printf("Result:%d\n",a*b);
else if(o=='/')
	printf("Result:%d\n",a/b);
else 
	printf("INVALID INPUT...!!!\n");
return 0;
}
