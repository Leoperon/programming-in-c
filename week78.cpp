#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Iitkgp",str2[20]="Nptel";
	printf("%s",strcpy(str1,strcat(str2,str1)));
	return 0;
}
