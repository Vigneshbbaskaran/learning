//14. Write a program similar to strchr.
#include<stdio.h>
int find(char *a,char c);
int main()
{
	char a[10]="hellow";
	char c;
	int temp;
	printf("enter the character to search in \"hellow\"\n");
	c=getchar();
	temp=find(a,c);
	if(temp<0)
		printf("\nNot Found\n");
	else
		printf("\nfound at a[%d]\n",temp);

	return 0;
}
int find(char *a,char c)
{
	int i;
	for(i=0;*(a+i)!=c;i++)
	{
		if(*(a+i)=='\0')
			return -1;
	}
	return i;
}


