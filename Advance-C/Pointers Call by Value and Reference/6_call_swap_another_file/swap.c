void swap(int *p)
{
	int temp;
	temp=*p;
	*p=*(p+1);
	*(p+1)=temp;
}
	
