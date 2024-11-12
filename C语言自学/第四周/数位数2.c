#include<stdio.h>
int main()
{
	printf("请输入一串整数, 我来判断位数:");
	int num=0,n=0;
	scanf("%d",&num);
	do{
		n++;
		num /= 10;
	} while(num>0);
	printf("该整数的位数是:%d",n);
	return 0;
}
