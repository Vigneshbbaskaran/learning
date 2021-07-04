#include<stdio.h>

void itoa(int a)
{
	char b[10],i=0;
	int temp;
	printf("\nCharacter:\n");
	while(a)
	{	
		i++;
		b[i] =  (a%10)+48;
		a/=10;
		
	}
	
	for(;i!=0;i--)
		printf("%c",b[i]);
	printf("\n");
}




int main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);

	itoa(a);
}

