#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{	
	char buff;
	read(0,&buff,1);
	return 0;
}
