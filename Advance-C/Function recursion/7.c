#include<stdio.h>
#include<stdlib.h>
void call(char s[])
{
	static int a;
	if(s[a]==NULL)
	{	printf("\nString length : %d\n",a);
		return;
	}
	a++;
	call(s);
	return;
}

int main()
{
	char a[20];
	printf("Enter your name : ");
	scanf("\n%[^\n]s",a);
//	printf("Reversed string : ");
	call(a);
	printf("\n");
}
