#include<stdio.h>
int main()
{
	char *s= "NPTEL";
	char *p=s;
	printf("%c%c",*(p+1),s[1]);
	return 0;
}
