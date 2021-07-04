#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,a;
	FILE *f;
	char line;
	f=fopen("1","a");
//	fprintf(f,"Appended:\n");
	
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

