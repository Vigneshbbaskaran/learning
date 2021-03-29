#include<stdio.h>
void trim(char a[100]);

int main()

{
	char a[100];

	printf("enter a string for space removal:\n");
	scanf("%[^\n]s",a);

	trim(a);

	printf("after trimed:\n%s",a);

	return 0;
}

void trim(char a[100])
{	int i,j;
	while(a[0]==' ')
	{
		if(a[0]== ' ' )
		{
			for(i=0;a[i]!='\0';i++)
			{
				a[i]=a[i+1];
			}
		}
	}
for(j=0;a[j]!='\0';j++);
	while(a[j-1]==' ')
	{
		a[j-1]='\0';
		j--;
	}
		
}

