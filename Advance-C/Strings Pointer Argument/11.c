#include<stdio.h>
void lower(char *str);
int main()
{
	char str[10]="HeLLoW";
	lower(str);

	printf("upper case string:%s\n",str);
	return 0;
}

void lower(char *str)
{
	int i;
	for(i=0;*(str+i)!='\0';i++)
	{
		if(*(str+i)>=97 && *(str+i)<=122)
			*(str+i) = *(str+i) - 32;
	}
	return ;
}

