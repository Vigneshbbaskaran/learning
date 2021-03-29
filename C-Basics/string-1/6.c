#include<stdio.h>
int index(char a[100],char b[100]);
int main()
{
	char a[100],b[100];

	printf("enter a string:\n");
	scanf("%[^\n]s",a);

	printf("enter another string for search\n");
	scanf("%s",b);
	int temp;
	temp = index(a,b);
	printf("\nfound at %d\n",temp);

	return 0;
}
int index(char a[100],char b[100])
{
int i;
	for(i=0;a[i]!='0';i++)
	{
			if(a[i]==b[0])
			{	break;
			}
	}
	return i;
}
