#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>
#include<string.h>

void main(int argc, char *argv[])
{
        char a[100]="/bin/";
        pid_t pid;
	int ret,status,i;

        for(i=1;i<argc;i++)
        {
              (argv[i-1])=(argv[i]);
                printf("%s\n",argv[i-1]);
	    }
	strcat(a,argv[0]);
//	printf("%s\n",a);
	pid = fork();
	if (pid == 0)
	{
	
		ret = execve(a,argv,NULL);
		if(ret == -1)
		perror("execve fails");
		exit(0);
	}
	else
	{
		wait(&status);
	}
}

	


