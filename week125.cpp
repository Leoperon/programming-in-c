#include<stdio.h>
int main()
{
	struct xyz
	{
		int a;
	};
	struct xyz obj1={2};
	struct xyz obj2=obj1;
	printf("%d",obj2.a);
	obj2.a=200;
	obj1.a=220;
	printf("%d",obj1.a);
	printf("%d",obj2.a);
	return 0;
}
