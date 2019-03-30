#include<stdio.h>
int f(int a)
{
	a>2?return(1):return(2);
}
int main()
{
	int b;
	b=f(1);
	 printf("%d\n",b);
	 return 0;
}
