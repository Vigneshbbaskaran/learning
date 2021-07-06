#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{	
	char buff;
	int fd,i,j,count=0,count1=0;
	for(i=1;i<argc;i++)
	{
		fd=open(argv[i],O_RDONLY);
		if(fd<0)
		{
			perror("Open fail");
			_exit(1);
		}
		while(1)
		{
			j=read(fd,&buff,1);
			if(j<=0)
				break;
			if(buff=='\n')
				count1++;
		
		}
		close(fd);
	//	printf("\ntotal n:%d",count1);
		fd=open(argv[i],O_RDONLY);
		while(1)
		{	
			j=read(fd,&buff,1);
		//	printf("%c.",buff);
			if(j<0)
			{
				perror("Read fails..!!");
				_exit(1);
			}
			if(j==0)
				break;
			if(count>=(count1-11) | count1<10)
			{
				write(1,&buff,1);
			}
			if(buff=='\n')
				count++;

		}
		close(fd);
	}
	return 0;
}
