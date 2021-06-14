//1. Write a function that takes a string as an input, and count the number of words in the string, and returns the number,

#include<stdio.h>
int count(char *p)
{
	int i,temp=0;
	for(i=0;(*(p+i))!='\0';i++)
	{
		if((*(p+i)==' ') && (*(p+i+1)!=' '))
		{	
			temp++;
		
		}
		if(*(p+i)==' ' && *(p+i+1)=='\0')	
			break;

	}
	return temp+1;
}
int main()
{
	char s[100],temp;
	printf("enter sentence:\n");
	scanf("%[^\n]s",s);
	temp=count(s);
	printf("total number of words:%d\n",temp);
}
