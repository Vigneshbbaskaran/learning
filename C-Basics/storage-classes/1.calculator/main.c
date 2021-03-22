
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



