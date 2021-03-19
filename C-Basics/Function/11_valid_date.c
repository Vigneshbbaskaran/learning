//11)Write a function to accept a date and validate the date.
#include<stdio.h>
void validate(int,int,int);

int main()
{
int a,b,c;
printf("Enter the valid year(1000-2200) in dd-mm-yyyy format:\n");
scanf("%d-%d-%d",&a,&b,&c);
validate(a,b,c);
return 0;
}

void validate(int a,int b, int c)
{
if(c>=1000 && c<=2200) // check valid year
{
	if(b>=1 && b<=12) // check validate month
	{
		if ( ( ((c%4 == 0) && (c%100 != 0)) || (c%400 == 0) ) && b==2 )  // Checking for leap year and month FEB
		{  
	 		if(a>=1 && a<=29) // FEBRUARY
	 			printf("Valid Date");
	 		else
	 			printf("Invalid Date");
		}
		else // incase Not a leap year
		{
			switch(b)
			{
		case 1: // JANUARY
			if(a>=1 && a<=31)
				printf("Valid Date");
			else
				printf("Invalid Date");
			break;
		case 2: // FEBRUARY
			if(a>=1 && a<=28)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 3: // MARCH
                        if(a>=1 && a<=31)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 4: // APRIL
                        if(a>=1 && a<=30)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 5: // MAY
                        if(a>=1 && a<=31)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 6: // JUNE
                        if(a>=1 && a<=30)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 7: // JULY
                        if(a>=1 && a<=31)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 8: // AUGUST
                        if(a>=1 && a<=31)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 9: // SEPTEMBER
                        if(a>=1 && a<=30)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 10: // OCTOBER
                        if(a>=1 && a<=31)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 11: // NOVEMBER
                        if(a>=1 && a<=30)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                case 12: // DECEMBER
                        if(a>=1 && a<=31)
                                printf("Valid Date");
                        else
                                printf("Invalid Date");
                        break;
                	}
        
		}       
	}	
	else // Invalid Month
		printf("Invalid Date");
}
else // Invalid Year
	printf("Invalid Date");
printf("\n");
return ;
}

