/*Rewrite the calculator program so that the main function is in main.c , 
remaining functions are in another source code file ,operations.c. 

2 ) Create the operand variables as global variables and use them in the operation functions directly, 
without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.
*/
#include<stdio.h>
int a,b,result;
int add(void);
int sub(void);
int mul(void);
float div(void);
int mod(void);
void operation(char);

int main()

{	char c;
	printf("\nallowed operators for calculation '+' '-' '*' '/' '%%'\n\nenter number in this Format: num1 'operator' numb2\n");
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%')
	{
	operation(c);
	printf("\n%d %c %d =%d\n",a,c,b,result );
	}
	else
	printf("\nEnter valid operator..!!\n");
	return 0;
}



