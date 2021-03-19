/*12)Write a function to accept a character as input, return the upper case character, 
if the given character is a lower case alphabet, otherwise return the character as it is.
char CaseReverse(char );
*/

#include<stdio.h>
char casereverse(char);

int main()
{
	char i,a;
	printf("enter case-sensitive alphabet \n");
	i=getchar();

	i=casereverse(i);
	if(i==0)
		printf("invalid input.. Enter Alphabet\n");
	else
	printf("case reverse alphabet: %c\n", i);

	return 0;
}

char casereverse(char i)
{
	if(i>=65 && i<=90)
		i= i + 32;
	else if(i>=97 && i<=122)
		i= i - 32;
	else
		i = 0 ; // Error message

return i;
}


