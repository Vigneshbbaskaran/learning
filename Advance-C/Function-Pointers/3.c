#include<stdio.h>

int add1(int a,int b)
{	
	printf("\tADD :");
       return a+b;
}
int sub1(int a,int b)
{
	printf("\tSUB :");
        return a-b;
}
int mul1(int a,int b)
{
	printf("\tMUL :");
        return a*b;
}
int div1(int a,int b)
{
	printf("\tDIV :");
        return a/b;
}
int rem1(int a,int b)
{
	printf("\tREM :");
        return a%b;
}

void calculator(int (*fptr)(int,int),int a,int b);

int main()
{
        int a,b,i;
        printf("\nEnter a: ");
        scanf("%d",&a);
        printf("\nEnter b: ");
        scanf("%d",&b);
	printf("\nCALCULATOR\n");
	calculator(add1,a,b);  
	calculator(sub1,a,b);  
	calculator(mul1,a,b);  
	calculator(div1,a,b);  
	calculator(rem1,a,b);  

}
void calculator(int (*fptr)(int,int),int a,int b)
{
	printf("%d\n",fptr(a,b));	
}


