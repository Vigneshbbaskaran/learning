#include<stdio.h>
int count(char a[100]);
int main()
{
	char temp,a[100];
	printf("enter a string:\n");
	scanf("%[^\n]s",a);
	
	temp=count(a);
	
	printf("\n%d no of words\n",temp);

	return 0;
}

int count(char a[100])
{
	int i,temp=0;
	for(i=0;i<100;i++)
	{
		if(a[i]==' ' && a[i+1]!=' ')
			temp++;
		if(a[i-1]==' ' && a[i]=='\0')	
			break;
		if(a[i]=='\0')
		{
			temp++;
			return temp;
		}
	}
	return temp;
}


	
