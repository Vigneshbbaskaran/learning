#include<stdio.h>
int main()
{
	char a;
	printf("enter a vowel\n");
	scanf("%c",&a);
	(a=='a' || a=='e' || a== 'i' || a=='o' || a=='u' || a== 'A' || a== 'E' || a== 'I' || a== 'O' || a== 'U') ? printf("VOWEL\n") : printf("NOT A VOWEL\n");

	return 0;
}
