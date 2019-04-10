#include<stdio.h>
int main()
{
	short arr[3][3]={2,7,10,12,15,18,25,32,35};
	printf("%d,%d",*(arr+1)[1],**(arr+1));
	return 0;
}
