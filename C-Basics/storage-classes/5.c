#include<stdio.h>
void fun(int);
int main()
{
	int i, a;
	printf("enter a number: \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fun(i);
	}
	printf("\n");
	return 0;
}

void fun(int i)
{
	int temp;
	printf("\nI am called %d",i);
	temp = i%10;
	if(temp == 1 && i!=11)
		printf("st");
	else if(temp == 2 && i!=12)
		printf("nd");
	else if(temp == 3 && i!=13)
		printf("rd");
	else
		printf("th");
	printf(" Time.");

return;
}

