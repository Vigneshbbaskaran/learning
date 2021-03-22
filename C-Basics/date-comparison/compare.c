#include<stdio.h>
int DateCompare(int d1,int m1, int y1,int d2, int m2,int y2)
{



	if(y1>y2)
		return 1;
	else if(y1==y2) // incase both year same, check further detail
	{
		if(m1>m2)
			return 1;
		else if(m1==m2) // incase both month same, check further detail
		{
			if(d1>d2)
				return 1;
			else if(d1==d2)
				return 0;
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;



}

