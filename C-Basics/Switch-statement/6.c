#include<stdio.h>
int main()
{
char a;
printf("enter a VOWEL\n");
scanf("%c",&a);

switch(a)
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
printf("Entered character is VOWEL\n");
break;
default: printf("Entered character is NOT VOWEL\n");
}

return 0;
}

