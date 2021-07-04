/*
1) keep reading numbers from user, and write those numbers to a file. Once user presses -1, stop reading, and print all the contents of the file. 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,a;
	FILE *f;
	char line;
	f=fopen("1","w");
	while(1)
	{
		printf("ENTER a number :");
		scanf("%d",&a);
		if(a<0)
			break;
		fprintf(f,"%d\n",a);
	}
	fclose(f);
	f=fopen("1","r");
	while (1) 
	{	line=getc(f);
		if (feof(f))
 	           break;
 		printf ("%c",line);
	}
	fclose(f);
}

