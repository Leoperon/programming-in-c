#include<stdio.h>
void fl(void);
int val=6;
int main(void)
{
	
	 fl();
	 printf("%d",val);
	 fl();
	 printf("%d",val);
	 return 0;
}
void fl(void)
{
	++val;
}

