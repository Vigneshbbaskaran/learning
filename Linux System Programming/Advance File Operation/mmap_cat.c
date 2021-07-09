#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include<stdio.h>
#include <fcntl.h>
#include <sys/mman.h>

int main(int argc,char *argv[])
{
	int i,ret,fd;
	struct stat temp;
	char *buff,*temp2;
	
	fd = open(argv[1],O_RDONLY);
	ret = fstat(fd,&temp);
	if (ret < 0)
	perror("stat Fails:");
	else
	printf("stat sucess\n");

	printf("size of the abc file:%ld\n",temp.st_size);


	buff = (char *) mmap(0,temp.st_size,PROT_READ,MAP_PRIVATE,fd,0);

	temp2=buff;
	for(i=0;i<=temp.st_size;i++) {
		printf("%c",*buff);
		buff++;
	}	

	munmap(temp2,temp.st_size);	
	return 0;
}
