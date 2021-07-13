#include<stdio.h>
#include<stdlib.h>

int main()
{       char a[100];
	while(1)
	{
		system("pwd");
        	printf("------------->");
		scanf("%[^\n]",a);
//	printf("%s",a);
  	        system(a);
		getchar();
	}
}
