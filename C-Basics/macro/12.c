#include<stdio.h>
int main()
{
#if(os==1)
	printf("Microsoft Windows Welcomes you\n");
#elif(os==2)
	  printf("linux  Welcomes you\n");
#elif(os==3)
	    printf("Mac  Welcomes you\n");
#else
	    printf("invalid input");
#endif
return 0;
}

