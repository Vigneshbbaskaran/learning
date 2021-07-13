#include <sys/types.h>
#include <signal.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char **argv)
{	
	int i,id;
	pid_t pid;
	if(argc==2)
	pid=atoi(argv[1]);
	else if(argc<2)
		printf("enter Proper argument");
	else if(argc>2)
	{	id=atoi(argv[1]);
		id*=(-1);
		printf("%d\n",id);	
		pid=atoi(argv[2]);
	}
	printf("%d\n",pid);
	kill(pid, 9);

}
