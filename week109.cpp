#include<stdio.h>
int main()
{
	short num[3][2]={2,7,10,12,15,18};
	printf("%d %d",*(num+1)[1],**(num+2));
	return 0;
}
