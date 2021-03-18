/*1)Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
Hint: int add(int , int); 
int sub (int, int);
*/
#include<stdio.h>
int main()
{
	int a,b;
	float c;
	printf("enter two numbers for perform various operation:\n");
	scanf("%d%d",&a,&b);

	printf("Add =%d\n",add(a,b) );
	printf("Sub =%d\n",sub(a,b) );
	printf("Mul =%d\n",mul(a,b) );
	printf("Div =%d\n",div(a,b) );
	printf("Mod =%d\n",mod(a,b) );
	
	return 0;
}

int add(int a,int b)
	{
	return a+b;
	}

int sub(int a,int b)
	{
	return a-b;
	}	

int mul(int a,int b)
	{
	return a*b;
	}

int div(int a,int b)
	{
		return a/b;
	}

int mod(int a, int b)
	{
		return a%b;
	}
	
