#include<stdio.h>
int check(char a[100],char b[100]);
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
int i,j,temp=-1,check=0;
	for(i=0;a[i]!='\0';i++)
	{		
			if(a[i]==b[0])
			{	
				for(j=0;b[j]!='\0';j++)
				{
					if(a[i+j]==b[j])
						check=1;
					else
					{	check=0;
						break;
					}
				}
				if(check==1)
					return i;
						
			}
			else
				temp=-1;
	}
	return temp;
}
