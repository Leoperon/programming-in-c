#include<stdio.h>
int main()
{
	int x,y=1;
	for(x=11;x>0;x=x-3)
	{
		y=y%x;
	}
	printf("x=%d,y=%d",x,y);
    return 0;
}
