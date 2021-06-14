//6. declare different pointers with different data types. 
//Print the sizes of the pointer variables using sizeof operator. 
//Why do u think all of them are giving same size irrespective of the data type ?


#include<stdio.h>
int main()
{
	int *int1;
	char *char1;
	float *float1;

	printf("size\nSize of int pointer=%ld\nSize of char pointer=%ld\nSize of float pointer=%ld\n",sizeof(int1),sizeof(char1),sizeof(float1));
}
