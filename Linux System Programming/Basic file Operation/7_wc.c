#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{	
	char buff[10],b[10];
	int fd,i,j,temp,a,k=0,temp1;
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
			a=j;
			j=read(fd,&buff,1);
			if(j<0)
			{
				perror("Read fails..!!");
				_exit(1);
			}
			else if(j==0)
				break;
			if(a==' ' && j!=' ')
				temp++;
			

		}
			temp++;
			printf("%d",temp);;

		
		close(fd);
	}
	return 0;
}
