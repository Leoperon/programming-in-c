#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	*ptr=26;
	*ptr=62;
	printf("%d\n",*ptr);
	return 0;
}
