#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>


struct fb_var_screeninfo vinfo;


int main(int argc, char *argv[])
{
	int fbfd, fbsize;
	unsigned char *fbbuf;

/* Open video memory */
if ((fbfd = open("/dev/fb0", O_RDWR)) < 0) {
	exit(1);
}

/* Get variable display parameters */
if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo)) {
	printf("Bad vscreeninfo ioctl\n");
	exit(2);
}
/* Size of frame buffer =

(X-resolution * Y-resolution * bytes per pixel) */
fbsize = vinfo.xres*vinfo.yres*(vinfo.bits_per_pixel);
printf("xres:%d x yres:%d",vinfo.xres,vinfo.yres);
/* Map video memory */
if ((fbbuf = mmap(0, fbsize, PROT_READ|PROT_WRITE, MAP_SHARED, fbfd, 0)) == (void *) -1){
	exit(3);
}

int fd,temp;
u_int32_t buff,off,i;
unsigned char buff1;
fd=open("img.bmp",O_RDWR);
	temp=read(fd,&buff,40);
//	temp=read(fd,&buff,2);
//	temp=read(fd,&off,4);
for (i=off; i<(fbsize)-40; ) 
{
	temp=read(fd,&buff,4);
	if(temp<=0)
		break;	
//	i((u_int32_t *)fbbuf + i) = (u_int32_t)0x00FF0000;
//	*((u_int32_t *)fbbuf + i) = (u_int32_t)buff;
//	*((u_int32_t *)fbbuf + i) = (u_int32_t)0x00FF0000;
	/**(fbbuf+i) = 0x00; // BLUE
	i++;
	*(fbbuf+i) = 0x00; // GREEN
	i++;
	*(fbbuf+i) = 0xFF; // RED
	i++;
	*(fbbuf+i) = 0x00;
	i++;*/
	i ++;
//	*((u_int32_t *)fbbuf + i) = (u_int32_t)buff;
//	*((u_int32_t *)fbbuf + i) = (u_int32_t)0x00FF0000;
//	i ++;
}
/*
sleep(2);
for (i=0; i<fbsize; ) {
	*(fbbuf+i) = 0x00; // BLUE
	i++;
	*(fbbuf+i) = 0xFF; // GREEN
	i++;
	*(fbbuf+i) = 0x00; // RED
	i++;
	*(fbbuf+i) = 0x00;
	i++;
}
sleep(2);
for (i=0; i<fbsize; ) {
	*(fbbuf+i) = 0xFF; // BLUE
	i++;
	*(fbbuf+i) = 0x00; // GREEN
	i++;
	*(fbbuf+i) = 0x00; // RED
	i++;
	*(fbbuf+i) = 0x00;
	i++;
}
sleep(2);
for (i=0; i<fbsize; ) { // WHITE = R+G+B
	*(fbbuf+i) = 0xFF; // BLUE
	i++;
	*(fbbuf+i) = 0xFF; // GREEN
	i++;
	*(fbbuf+i) = 0xFF; // RED
	i++;
	*(fbbuf+i) = 0x00;
	i++;
}
sleep(2);
for (i=0; i<fbsize; ) { //BLACK = R-G-B
	*(fbbuf+i) = 0x00; // BLUE
	i++;
	*(fbbuf+i) = 0x00; // GREEN
	i++;
	*(fbbuf+i) = 0x00; // RED
	i++;
	*(fbbuf+i) = 0x00;
	i++;
}
sleep(2);
*/
munmap(fbbuf, fbsize);
}

