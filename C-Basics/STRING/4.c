#include<stdio.h>
void reverse(char a[10]);
int main()
{
	char a[10]="hellow";

	reverse(a);
	printf("Reversed string = %s\n",a);
	return 0;
}

void reverse(char a[10])
{
	int i,j,temp;
	for(j=0;a[j]!='\0';j++);
	i=0;
	j=j-1;
	for(;i<10;i++,j--)
	{
	if(i<j)
	{printf("a[%d] = %c\na[%d] = %c\n",i,a[i],j,a[j]);
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	}
	return ;

}	
