#include<stdio.h>
int main()
{
	int *ptr,a=5;
	ptr=&a;
	*ptr+=2;
	printf("%d,%d",*ptr,a);
	return 0;
}
