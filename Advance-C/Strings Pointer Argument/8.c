
#include<stdio.h>
void strcpy1(char st1[10],char st2[10]);

int main()
{
	 char st1[100],st2[100];
	 printf("enter string:");

	 scanf("%[^\n]s",st2);

	 strcpy1(st1,st2);
	 
	 printf("copied string = %s\n",st1);

	 return 0;
}

void strcpy1(char *st1,char *st2)
{
	int i;
	for(i=0;*(st2+i)!='\0';i++)
	{
		*(st1+i)=*(st2+i);
		if(*(st2+i) == '\0')
			break;
	}
}

