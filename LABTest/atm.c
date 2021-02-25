#include<stdio.h>
int main()
{
	int a,temp;
	printf("enter the amount only multiples of 50\n");	
	scanf("%d",&a);	// getting input		

	temp=a/2000;    	// separating 2000INR part		
	printf("2000/-notes:%d\n",temp);


	a=a-(temp*2000);
        temp=a/500;            // separating 500INR part              
        printf("500/-notes:%d\n",temp);

	a=a-(temp*500);       
       	temp=a/200;                    // separating 200INR part              
        printf("200/-notes:%d\n",temp);

	a=a-(temp*200);
        temp=a/100;        // separating 100INR part              
        printf("100/-notes:%d\n",temp);

	a=a-(temp*100);        
       	temp=a/50;          // separating 50INR part              
        printf("50/-notes:%d\n",temp);
       	a=a-(temp*50);


       // printf("invalid..!!!!\nEntered amount exceeds by %d,\n ignore if  value =0, otherwise  deduce that amount and enter again \n",a); // error message



	return (a>=1);          // 'a' value above or equal to 1 shows error,  otherwise code runs successfully

}
