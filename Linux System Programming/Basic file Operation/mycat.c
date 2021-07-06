#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{	
	char buff[20];
	int fd,i,j;
//	printf(":%d\n",argc);
	for(i=1;i<argc;i++)
	{
	
//		printf("%s:\n",argv[i]);
		fd=open(argv[i],O_RDONLY);
		if(fd<0)
		{
			perror("Open fail");
			_exit(1);
		}
		while(1)
		{
			j=read(fd,buff,1);
			if(j<0)
			{
				perror("Read fails..!!");
				_exit(1);
			}
			else if(j==0)
				break;
			write(1,buff,1);

		}
		close(fd);
	}
	return 0;
}
