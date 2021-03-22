/*Rewrite the calculator program so that the main function is in main.c , 
remaining functions are in another source code file ,operations.c


3 ) Create the operand variables as global variables and the operator as an argument. result should be printed in function itself without returning.
*/
#include<stdio.h>
int a,b;
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

	operation(c);
	return 0;
}



