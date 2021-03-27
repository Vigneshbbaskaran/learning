#include<stdio.h>
int cmp(char a[10],char b[10]);
int main()
{
	char a[10];
	char b[10];
	printf("\nenter a string1:  ");
	scanf("%9s",a);
	printf("\nenter string2:  ");
	scanf("%9s",b);
	int temp;
	temp = cmp(a,b);

	printf("\n%d\n",temp);

	return 0;
}
int cmp (char a[10],char b[10])
{
	int i;
	for(i=0;a[i]==b[i];i++)
	{
		if (a[i]=='\0' && b[i]=='\0')
			break;
	}
	return a[i]-b[i];
}





