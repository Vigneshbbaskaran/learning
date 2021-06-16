#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k=0;
	char *a;
	char *p[4]={"zena","app","cut","heartik"};
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
		for(i=0;i<4;i++)
		printf("%s\n",p[i]);
}
