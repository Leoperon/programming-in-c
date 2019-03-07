#include<stdio.h>
int main()
{
	int i=0;
	for(;i<=10;++i)
	{
		 if(i>=5)
		   continue;
		 printf("%d",++i);
	}
	return 0;
}
