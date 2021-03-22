/*Rewrite the calculator program so that the main function is in main.c ,
remaining functions are in another source code file ,operations.c. 

1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. 
Function returns the result as return value.
*/
#include<stdio.h>
int a,b;
int add(void);
int sub(void);
int mul(void);
float div(void);
int mod(void);
int operation(char);

int main()

{	char c;
	printf("\nallowed operators for calculation '+' '-' '*' '/' '%%'\n\nenter number in this Format: num1 'operator' numb2\n");
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%')
	printf("\n%d %c %d =%d\n",a,c,b,operation(c) );
	else
	printf("\nEnter valid operator..!!\n");
	return 0;
}



