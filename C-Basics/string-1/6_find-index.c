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
	if(temp>=0)
		printf("\nfound at %d\n",temp);
	else 
		printf("\nNot found\n");
	return 0;
}
int index(char a[100],char b[100])
{
int i,temp=-1;
	for(i=0;a[i]!='\0';i++)
	{		
			if(a[i]==b[0])
			{	return i;
			}
			else
				temp=-1;
	}
	return temp;
}
