#include<stdio.h>
int main()
{
	char s1[7]="123456",*p1,*p2,*p3;
	p1=s1+2;
	p2=s1+3;
	p3=s1+1;
	*p1='08';
	*p3='8';
	*p2='2';
	printf("%s",s1);
	return 0;
}	
