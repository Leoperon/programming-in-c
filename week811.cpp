#include<stdio.h>
int fun(int x)
{
	 int fun1;
	 if(x>100)
	    fun1=x-10;
	else
	    fun1=fun(fun(x+11));
	    return fun1;
}
int main()
{
	int y;
	y=fun(95);
	 printf("%d",y);
	 return 0;
}
