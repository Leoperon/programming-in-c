#include<stdio.h>
int f(int, int);
int main()
{
	int ar[10],n;
	scanf("%d",&n);
	for( int i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	f(ar[10],n);
	return 0;
}
f(int Y[10],int x)
{
	int i,j,k;
	i=0;j=9;
	do{
		k=(i+j)/2;
		if(Y[k]<x) i=k; else j=k;
	}while(Y[k] !=x && i<j);
	if(Y[k]==x) 
	  printf("x is in the array");
	else printf("x is not in the array");
	
}
