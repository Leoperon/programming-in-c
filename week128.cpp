#include<stdio.h>
int fun(int arr[])
{
	arr=arr+2;
	printf("%d",arr[0]);
}
int main(void)
{
	int arr[3]={1,5,10};
	fun(arr);
	printf("%d",arr[1]);
	printf("%d",arr[2]);
    return 0;
}
