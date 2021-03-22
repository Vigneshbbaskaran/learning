/*5)WAP - with a function that prints the following message every nth time it is called :   
Hello! I am called nth time. Print the appropriate subscript after the n, depending on the last digit.  
Output : The function should print the following ,  
I am called 1st time.  
I am called 2nd time.``  
I am called 3rd time…etc.  
The subscripts also should be printed appropriately. (st, nd ,rd and th etc.).  
Hint : numbers ending with 1 will have st as subscript.  
Numbers ending with 2 will have nd as subscript.  
Similarly, numbers ending with 3 will have rd and all the remaining numbers will have th.  
*/
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

