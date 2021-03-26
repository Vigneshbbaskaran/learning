#include<stdio.h>
void strcpy1(char st1[10],char st2[10]);

int main()
{
	 char st1[10],st2[10]="vignesh";

	 strcpy1(st1,st2);
	 
	 printf("copied string = %s\n",st1);

	 return 0;
}

void strcpy1(char st1[10],char st2[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		st1[i]=st2[i];
		if(st2[i] == '\0')
			break;
	}
}
