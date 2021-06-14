//13. Write a program similar to strcmp.
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
int cmp (char *a,char *b)
{
	int i;
	for(i=0;(*(a+i)!='\0')||(*(b+i)!='\0');i++)
	{
		if((*(a+i))>(*(b+i)))
			return 1;
		if((*(a+i))<(*(b+i)))
			return -1;
		
	}
	return 0;
}

