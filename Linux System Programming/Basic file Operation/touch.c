#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
	
int main(int argc, char *argv[])
{	

	char buff;
	int fs,fd,i,j=1;
	for(i=1;i<argc-1;i++)
	{
		fd=open(argv[i],O_CREAT|O_RDWR,0666);
		j=read(fd,&buff,1);
	}
	close(fd);
	return 0;
}
