#include<stdio.h>
int main()
{	
	int temp;
	char a;
	printf("enter an Alphabet\n");
	scanf("%c",&a);
	temp = a;
	if(temp >=65)
	{
		if(temp<=90)
			printf("Capital Alphabet\n\n");
		else if(temp<97)
			printf("Not an Alphabet\n\n");
		else if(temp>122)
			printf("Not an Alphabet\n\n");
		else
			printf("Small Alphabet\n\n");
	
	}
	else
		printf("Not a Alphabet\n\n");
return 0;
}
