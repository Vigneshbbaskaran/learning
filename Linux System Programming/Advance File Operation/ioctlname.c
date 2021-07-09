#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/input.h>

int main(int argc, char *argv[])
{
	int fd1,retfd;
	char buf[4096];
	int val,i;
	char name[256] = "Unknown";
	for(i=1;i<argc;i++)//all the event \"sudo ./a.out /dev/input/event*\"

	{
		printf("\n%s\n",argv[i]+11); //Print the event no
		fd1=open(argv[i],O_RDONLY);
		if(fd1<0)
		{
			perror("Open Fails");
			return -1;
		}
       		ioctl(fd1, EVIOCGNAME(sizeof(name)), name);
       		printf("Input device name: \"%s\"\n", name);
	}
	return 0;
}
		

