#include<stdio.h>
int main()
{
	char a[100],b[100];

	printf("enter a string:\n");
	scanf("%[^\n]s",a);

	printf("enter another string for search\n");
	scanf("%s",b);
	int i;
	for(i=0;a[i]!='0';i++)
	{
			if(a[i]==b[0])
			{	break;
			}
	}
	printf("\nfound at %d\n",i);

	return 0;
}
	

