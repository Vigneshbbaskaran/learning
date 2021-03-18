#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(int a,int b);
int mod(int a,int b);

int main()

{
	int a,b;
	printf("enter two numbers for perform various operation:\n");
	scanf("%d%d",&a,&b);
	

	printf("\nAdd =%d\n",add(a,b) );
	printf("Sub =%d\n",sub(a,b) );
	printf("Mul =%d\n",mul(a,b) );
	printf("Div =%.2f\n",div(a,b) );
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

float div(int a,int b)
	{
		float c;
		c= a/(float)b;
		return c;
	}

int mod(int a, int b)
	{
		return a%b;
	}
	
