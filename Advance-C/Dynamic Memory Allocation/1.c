#include<stdio.h>
int main(int argc, char **argv)
{	int i,temp1=0,temp2=0;
	if(*argv[2] == '+')
		{
			for(i=0;(argv[1][i])!='\0';i++)
				temp1 = (temp1*10*i) +((argv[1][i])-48);
			for(i=0;(argv[3][i])!='\0';i++)
				temp2 = (temp2*10*i) +(argv[3][i]-48);
			printf("\nAdd:%d\n",temp1+temp2);
		}
	printf("%c:argv[2]\n",*argv[2]);
	if( *argv[2] == '-')
		{
			for(i=0;(argv[1][i])!='\0';i++)
				temp1 = (temp1*10*i) +(argv[1][i]-48);
			for(i=0;(argv[3][i])!='\0';i++)
				temp2 = (temp2*10*i) +(argv[3][i]-48);
			printf("\nSub:%d",temp1-temp2);
		}
	if(*argv[2] == 'x')
		{
			for(i=0;(argv[1][i])!='\0';i++)
				temp1 = (temp1*10*i) +(argv[1][i]-48);
			for(i=0;(argv[3][i])!='\0';i++)
				temp2 = (temp2*10*i) +(argv[3][i]-48);
			printf("\nMul:%d",temp1*temp2);
		}
	if( *argv[2] == '/')
		{
			for(i=0;(argv[1][i])!='\0';i++)
				temp1 = (temp1*10*i) +(argv[1][i]-48);
			for(i=0;(argv[3][i])!='\0';i++)
				temp2 = (temp2*10*i) +(argv[3][i]-48);
			printf("\ndiv:%d",temp1/temp2);
		}
	if(*argv[2] == '%')
		{
			for(i=0;(argv[1][i])!='\0';i++)
				temp1 = (temp1*10*i)+(argv[1][i]-48);
			for(i=0;(argv[3][i])!='\0';i++)
				temp2 = (temp2*10*i)+(argv[3][i]-48);
			printf("\n:%d",temp1%temp2);
		}
}
