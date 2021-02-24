#include<stdio.h>
int main()
{
	int temp,num;
	printf("enter 4 digit number\n");            //getting numbers
	scanf("%d", &num);
	
	temp = num %10;   
	printf("op1:\n%d\n", temp);                 //op1:     
	temp = num %100;  
	temp = temp /10;   
        printf("%d\n", temp);
	temp = num %1000;
	temp = temp /100;
        printf("%d\n", temp);
	temp = num %10000;
	temp = temp / 1000;
        printf("%d\n", temp);

	temp = num /1000;
        printf("op2:\n%d\n", temp);                 //op2:     
        temp = num %1000;  
        temp = temp /100;   
        printf("%d\n", temp);
        temp = num %100;
        temp = temp /10;
        printf("%d\n", temp);
        temp = num %10;
        printf("%d\n", temp);

        temp = num /1000;
        printf("op3:\n%d\n", temp);                 //op3:     
        temp = num /100;
        printf("%d\n", temp);
        temp = num /10;
        printf("%d\n", temp);
        printf("%d\n", num);

	printf("op4:\n%d\n", num);                      //op4
	temp = num /10;
	printf("%d\n", temp);
	temp = num /100;
        printf("%d\n", temp);
        temp = num /1000;
        printf("%d\n", temp);

	
return 0;
}
