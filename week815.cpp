#include<stdio.h>
int a=10;
void compute(int a)
{
	a=a;
}
int main()
{
	int a=100;
	 printf("%d",a);
	 compute(a);
	 printf("%d",a);
	 return 0;
}
