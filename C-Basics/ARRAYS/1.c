#include<stdio.h>
int main()
{
	int i,a[100];
	printf("\nAll Numbers\na[] = {");;
	for (i=0;i<100;i++)
	{
		a[i]=i+1;
		printf(" %d,",a[i]);
	}	
	printf("\b}\n");
	printf("\nAll Even elements\n");
	for(i=0;i<100;i++)
	{
		if(a[i]%2==0 && a[i]!=1)
			printf("a[%d] = %d\n",i,a[i]);
	}
 	printf("\nAll odd elements\n");
        for(i=0;i<100;i++)
        {      
                if(a[i]%2!=0 || a[i]==1)
                        printf("a[%d] = %d\n",i,a[i]);
        }
	printf("\nNO 6-105 :");	 
       	for (i=0;i<100;i++)
        {	a[i]=a[i]+5;
                printf(" %d,",a[i]);
	}
	printf("\b \n");
	return 0;
}


