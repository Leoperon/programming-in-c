#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int*)malloc(sizeof(int)*4);
	ptr=realloc(ptr,sizeof(int)*2);
//	printf("%d\n",*ptr);
	return 0;
}
