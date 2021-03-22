#include<stdio.h>

void PrintSubscript(int d);

void PrintDateinFormat(int d, int m, int y)
{
	printf("The candidate born on %d",d);
	PrintSubscript(d);

		switch(m)
			{
		case 1: // JANUARY
			printf(" JANUARY");
			break;
		case 2: // FEBRUARY
			printf(" FEBRUARY");
                        break;
                case 3: // MARCH
			printf(" MARCH");
                        break;
                case 4: // APRIL
			printf(" APRIL");
                        break;
                case 5: // MAY
			printf(" MAY");
                        break;
                case 6: // JUNE
			printf(" JUNE");
                        break;
                case 7: // JULY
			printf(" JULY");
                        break;
                case 8: // AUGUST
			printf(" AUGUST");
                        break;
                case 9: // SEPTEMBER
			printf(" SEPTEMBER");
                        break;
                case 10: // OCTOBER
			printf("OCTOBER");
                        break;
                case 11: // NOVEMBER
			printf("NOVEMBER");
                        break;
                case 12: // DECEMBER
			printf("DECEMBER");
                        break;
                	}
	printf("-%d is elder of all\n",y);
return;
}

void PrintSubscript(int d)
{
 switch(d)
                        {
                case 1: 
                        printf("st");
                        break;
                case 2: 
                        printf("nd");
                        break;
                case 3: 
                        printf("rd");
                        break;
                case 4:
                        printf("th");
                        break;
                case 5: 
                        printf("th");
                        break;
                case 6: 
			printf("th");
                        break;
                case 7: 
                        printf("th");
                        break;
                case 8: 
                        printf("th");
                        break;
                case 9: 
                        printf("th");
                        break;
                case 10:
 			printf("th");
                        break;
                case 11: 
                        printf("th");
			break;
		case 12:
                        printf("th");
                        break;
                case 13:
                        printf("th");
                        break;
                case 14:
                        printf("th");
                        break;
                case 15:
                        printf("th");
                        break;
                case 16:
                        printf("th");
                        break;
                case 17:
                        printf("th");
                        break;
                case 18:
                        printf("th");
                        break;
                case 19:
                        printf("th");
                        break;
                case 20:
                        printf("th");
                        break;
                case 21:
                        printf("st");
                        break;
                case 22:
                        printf("nd");
                        break;
                case 23:
			printf("rd");
                        break;
                case 24:
                        printf("th");
                        break;
                case 25:
                        printf("th");
                        break;
                case 26:
                        printf("th");
                        break;
                case 27:
                        printf("th");
                        break;
                case 28:
			printf("th");
                        break;
                case 29:
                        printf("th");
                        break;
                case 30:
                        printf("th");
                        break;
		case 31:
                        printf("st");
                        break;
      
		       	}
 }

