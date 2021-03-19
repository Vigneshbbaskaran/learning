//5)Write a function that takes an integer parameter and prints its multiplication table.return type should be void.

#include<stdio.h>
void table(int);

int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);

table(a);
return 0;
}

void table(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",a ,i ,a*i);
	}
}

