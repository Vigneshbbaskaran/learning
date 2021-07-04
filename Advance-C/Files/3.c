/*
3) Read the contents of a file and copy to another file.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,a;
	FILE *f,*f1;
	char line;
	f=fopen("1","r");
	f1=fopen("2","w");

	while(1)
	{	
		line=getc(f);
                if (feof(f))
                         break;
                fprintf(f1,"%c",line);
	}
	fclose(f);
	fclose(f1);
	f=fopen("2","r");
	 while (1)
        {       line=getc(f);
                if (feof(f))
                	 break;
		printf ("%c",line);
        }
	fclose(f);
}

