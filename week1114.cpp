#include<stdio.h>
unsigned int func(unsigned int n,unsigned int r)
{
	if(n>0) return(n%r+ func(n/r,r));
	else return 0;
}
main()
{
	//int l,m;
	func(unsigned int n,unsigned int r);
}
