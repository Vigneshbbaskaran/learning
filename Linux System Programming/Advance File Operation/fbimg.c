#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <sys/ioctl.h>

struct fb_var_screeninfo vinfo;

int main(int argc, char *argv[])
{
	int fbfd, fbsize, i;
	unsigned char *fbbuf;
	if ((fbfd = open("/dev/fb0", O_RDWR)) < 0) {
		exit(1);
	}
	if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo)) {
		printf("Bad vscreeninfo ioctl\n");
		exit(2);
	}	
	fbsize = vinfo.xres*vinfo.yres*(vinfo.bits_per_pixel);
	if ((fbbuf = mmap(0, fbsize, PROT_READ|PROT_WRITE, MAP_SHARED, fbfd, 0)) == (void *) -1){
		exit(3);
	}

	int fdi=0,check=0,count=0;
	char buff;
	fdi = open("img.bmp", O_RDWR);
	printf("%d\n",fdi);
	for (i=0; i<fbsize; i++)
       	{
		if(check=read(fdi,&buff,1)==0)
		break;
		if(check<0)
		{	perror("error");
			_exit(1);
		}
		if(i%4==0)		
		*(fbbuf+i) = 0x00; 
		else
		*(fbbuf+i) = buff; 
	}
	munmap(fbbuf, fbsize);
	return 0;
}

