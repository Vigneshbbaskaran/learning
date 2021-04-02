extern int a[2];

void swap(int a[2])
{
	int temp;
	temp = a[0];
	a[0]= a[1];
	a[1] = temp;
}
