#include<stdio.h>


int IsLeapYear(int y)
{
if( ((y%4==0) && (y%100 !=0)) || (y%400==0) )
	return 1;
else 
	return 0;
}

int IsValidDate(int d,int m,int y)
{
if(y>=1000 && y<=2200) // check valid year
{
	if(m>=1 && m<=12) // check validate month
	{
		switch(m)
			{
		case 1: // JANUARY
			if(d>=1 && d<=31)
				return 0;
			else
				return 1;
			break;
		case 2: // FEBRUARY
			if(d>=1 && d<=28)
                                return 0;
                        else
                                return 1;
                        break;
                case 3: // MARCH
                        if(d>=1 && d<=31)
                                return 0;
                        else
                  		return 1;
                        break;
                case 4: // APRIL
                        if(d>=1 && d<=30)
                                return 0;
                        else
                                return 1;
                        break;
                case 5: // MAY
                        if(d>=1 && d<=31)
                                return 0;
                        else
                                return 1;
                        break;
                case 6: // JUNE
                        if(d>=1 && d<=30) 
                                return 0;
                        else 
                                return 1;
                        break;
                case 7: // JULY
                        if(d>=1 && d<=31)
                                return 0;
                        else
                                return 1;
                        break;
                case 8: // AUGUST
                        if(d>=1 && d<=31)
                                return 0;
                        else
                                return 1;
                        break;
                case 9: // SEPTEMBER
                        if(d>=1 && d<=30)
                                return 0;
                        else
                                return 1;
                        break;
                case 10: // OCTOBER
                        if(d>=1 && d<=31)
                                return 0;
                        else
                                return 1;
                        break;
                case 11: // NOVEMBER
                        if(d>=1 && d<=30)
                                return 0;
                        else
                                return 1;
                        break;
                case 12: // DECEMBER
                        if(d>=1 && d<=31)
                                return 0;
                        else
                                return 1;
                        break;
                	}

	
	}
	else // Invalid Month
		return 1;
}
else // Invalid Year
	 return 1;
}

