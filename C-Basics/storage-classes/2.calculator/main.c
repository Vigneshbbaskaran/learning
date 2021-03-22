
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



