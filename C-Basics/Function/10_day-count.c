//10)Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.

#include<stdio.h>
int day(int,int);

int main()
{
int a,b,c;
printf("Enter month and year in numbers:\n");
scanf("%d-%d",&b,&c);

printf("total numbers days for the entered year and month: %d\n", day(b,c));

return 0;
}






int day(int b, int c)
{

if ( ( ((c%4 == 0) && (c%100 != 0)) || (c%400 == 0) ) && b==2 )  // Checking for leap year and month FEB
		{  
	 		return 29;
		}
else // incase Not a leap year
{
			switch(b)
			{
		case 1: // JANUARY
			return 31;
			break;
		case 2: // FEBRUARY
			return 28;
			break;
                case 3: // MARCH
			return 31;
			break;
                case 4: // APRIL
			return 30;
			break;
                case 5: // MAY
			return 31;
			break;
                case 6: // JUNE
			return 30;
			break;
                case 7: // JULY
			return 31;
			break;
                case 8: // AUGUST
			return 31;
			break;
                case 9: // SEPTEMBER
			return 30;
			break;
                case 10: // OCTOBER
			return 31;
			break;
                case 11: // NOVEMBER
			return 30;
			break;
                case 12: // DECEMBER
			return 31;
			break;
                	}
        
}       

}
