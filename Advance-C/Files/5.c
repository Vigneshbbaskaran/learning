#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	int i,a1=1,a2=1;
	FILE *f,*f1,*f2;
	char x,y;
	f=fopen(argv[1],"r");
	f1=fopen(argv[2],"r");
	f2=fopen(argv[3],"w");
	while(1)
	{	if(a1)
		{	do
			{
			x=getc(f);

                	if(feof(f))
                         {
				 while(1)
				 {			

				 	 y=getc(f1);
					 if(feof(f1))
						goto exit;
               				 fprintf(f2,"%c",y);
				 }
			 }
			}while(x=='\n');
		}
		if(a2)
		{	
			do{
			y=getc(f1);
			if(feof(f1))
                         {
				 while(1)
				 {			

				 	 x=getc(f);
					 if(feof(f))
						goto exit;
               				 fprintf(f2,"%c",x);
				 }
			 }
			}while(y=='\n');
		}
                a1=0;a2=0;
		if(x<y)
		{
			fprintf(f2,"%c",x);
			a1++;
		}
		if(x>y)
		{
			fprintf(f2,"%c",y);
			a2++;
		}
		if(x==y)
		{
			fprintf(f2,"%c",x);
			a1++;
			a2++;
		}


	}
exit:
	fclose(f1);
	fclose(f);
	fclose(f2);
}

