#include<stdio.h>
#define M 6
#define N 4
int main()
{
	int (*p)[M][N];
	printf("%d",sizeof(*p));
	return 0;
}
