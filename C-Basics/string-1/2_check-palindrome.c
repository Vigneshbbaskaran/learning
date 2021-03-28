/*2)Write a function that takes a string as input, 
and determines whether the string is a palindrome or not, returns 1 or 0.
*/
#include<stdio.h>
int check(char a[100]);

int main()
{
	char a[100];
	int temp=0;
	printf("enter a string:\n");
	scanf("%s",a);
	temp=check(a);

	if(temp==0)
		printf("\nNot Palindrome\n");
	else if(temp==1)
		printf("\nPalindrome\n");

	return 0;
}

int check(char a[100])
{
	int i,j,temp=1;
	for(j=0;a[j]!='\0';j++);
	j--;
	for(i=0;a[i]!='\0';i++,j--)
	{
		if(i<j)
		{
			if(a[i]==a[j])
				temp=1;
			else
				return 0;
		}
	}
return temp;
}

		
