#include<stdio.h>
/*int main()
{
	//int num;
	//scanf("%d",&num);
	func(435);
	return 0;
}*/
int main()
{
	int count=0,num;
	scanf("%d",&num);
	while(num)
	{
		count++;
		num>>=1;
	}
	printf("%d",count);
	 return 0;
}
