#include<stdio.h>
void strcat1(char s1[20], char s2[20]);
int main()
{
	char s1[20]= "hellow " , s2[20]= "world";
	strcat1(s1,s2);

	printf("concatenated s1=  %s\n",s1);
	return 0;
}

void strcat1(char s1[20],char s2[20])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	j=i;
	i=0;
	for(;s2[i]!='\0';j++,i++)
	{
		s1[j]=s2[i];
	}
		
return;
}
		


