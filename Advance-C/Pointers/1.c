#include<stdio.h>

int main()
{
	int a=5, *ptr;
	ptr=&a;

	printf("Address = %p\nSize = %ld\nValue =%d\n",ptr,sizeof(a),*ptr);
}

