#include<stdio.h>
int main()
{
char a;
printf("enter a vowel\n");
scanf("%c",&a);

if(a=='a' || a=='e'|| a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	printf("entered character is vowel\n");
else
	printf("entered character is not vowel\n");
	
return 0;
}

