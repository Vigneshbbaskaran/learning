#include<stdio.h>
int main()
{
	int side;
	printf("Enter the side\n");
	scanf("%d", &side);
	printf("area of square = %d \nand perimeter of square = %d\n", side*side, 4*side);
	return 0;
}
