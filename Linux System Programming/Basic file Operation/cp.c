#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
	
int main(int argc, char *argv[])
{	

	char buff[20];
	int fs,fd,i,j=1;
	fd=open(argv[argc-1],O_CREAT|O_RDWR|O_TRUNC,0666);
	for(i=1;i<argc-1;i++)
	{	j=1;
		fs=open(argv[i],O_RDONLY);
		if(fd<0)
		{
			perror("Open fail");
			_exit(1);
		}
		while(j!=0)
		{
			j=read(fs,buff,1);
			if(j<0)
			{
				perror("Read fails..!!");
				_exit(1);
			}
			if(j==0)
			{
				break;
			}
			write(fd,buff,1);
			write(1,buff,1);
			printf("\td:%d",argc);	
		}
		close(fs);
	}
	return 0;
}
