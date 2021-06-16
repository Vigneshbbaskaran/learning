#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k=0;
	char *a;
	char a[4][10];
	char *p;
	p=a;
	for(i=0;i<4;i++)
	{
		printf("enter your name\n");
		scanf("\n%s",a[i]);
	}
	for(i=0;i<4;i++)
	{			
			k=0;
			for(j=0;j<4-1;j++)
			{
				if((strcmp(p[j],p[j+1]))>0)
				{
				k=1;
				a=p[j];
				p[j]=p[j+1];
				p[j+1]=a;
				}
			}
			if(k==0)
			break;		
	}	
		for(i=1;i<4;i++)
		printf("%s\n",p[i]);
}
