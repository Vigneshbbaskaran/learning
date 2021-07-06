#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{	
	int i,j;
	for(i=1;i<argc;i++)
	{	
		
		for(j=0;argv[i][j]!='\0';j++);
		write(1,argv[i],j);
		write(1,"\n",1);
	}
	return 0;
}
