#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	int i,j,k=0;
	char *a;
	for(i=0;i<argc-1;i++)
	{	k=0;
	//	if(strcmp("./a.out",argv[i]))
			
				for(j=1;j<argc-1-i;j++)
				{
				if((strcmp(argv[j],argv[j+1]))>0)
				{
				k=1;
				a=argv[j];
				argv[j]=argv[j+1];
				argv[j+1]=a;
				//printf("%s\n",argv[i]);
				}
				}
				
			if(k==0)
			break;

		
	}	
		for(i=1;i<argc;i++)
		printf("%s\n",argv[i]);

}
