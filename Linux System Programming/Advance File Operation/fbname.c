// Write a program to read monitor resolution 

#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<linux/fb.h>
#include<sys/ioctl.h>
int main(int argc, char *argv[])
{
	int fd1;
	struct fb_var_screeninfo buff;
	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("Open Fails");
		_exit(1);
	}
        ioctl(fd1,FBIOGET_VSCREENINFO ,&buff);
        printf("x:%d\ny:%d\nbpp:%d\n",buff.xres,buff.yres,buff.bits_per_pixel);
	return 0;
}
		

