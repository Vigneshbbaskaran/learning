//2. Perform Bubble Sort on names.
#include<stdio.h>
#include<string.h>
void swap1(char **p1,char **p2)
{
	char *a=NULL;

	a=*p1;
	*p1=*p2;
	*p2=a;

}
void main()
{
	int i,j,k=0;
	char *a=NULL;
	char name[4][10];
	char *p[4]={NULL,NULL,NULL,NULL};
	for(i=0;i<4;i++)
		p[i]=&name[i][0];
	
	
	for(i=0;i<4;i++)
	{
		printf("enter your name  :");
		scanf("\n%s",name[i]);
	}
	for(i=0;i<4;i++)
	{			

			k=0;
			for(j=0;j<4-1;j++)
			{
				if((strcmp(p[j],p[j+1]))>0)
				{
				k=1;
				swap1(&p[j],&p[j+1]);
				}			
			}
			if(k==0)
			break;		
	}
	printf("\nSorted Names:\n");	
		for(i=0;i<4;i++)
		printf("\t\t%s\n",p[i]);
}
