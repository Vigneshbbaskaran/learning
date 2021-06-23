#include<stdio.h>
#include<stdlib.h>

void call(char s[])
{
	static int a,z=1;
	if(s[a]==NULL)
		return;
//	printf("\t%d",a);
	
	printf("%c",s[a++]);
	call(s);
	z--;
	if(z==0)
	{
		printf("\nReversed String: ");
	}
	printf("%c",s[--a]);
	return;
}

int main()
{
	char a[20];
	printf("\nEnter your name : ");
	scanf("\n%[^\n]s",a);
	printf("\nNormal string  : ");
	call(a);
	printf("\n");
}
