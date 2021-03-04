#include<stdio.h>
int main()
{
char a;
printf("enter a character \n");
scanf("%c",&a);

switch (a)
{
case 'a': 
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
	printf("enter character is vowel\n");
	break;
default:
	printf("entered characer is consonant\n");
}
return 0;
}
