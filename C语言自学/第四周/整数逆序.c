#include<stdio.h>
int main()
{
	int num;
	int x = 0;
	int end = 0; 
	printf("这是一个整数的逆序工具, 请输入你想逆序的整数: ");
	scanf("%d",&num);
	do{
		if (num > 0){
		x *= 10;
		end = num % 10;
		num /= 10;
		x += end;
		}
	}while(num > 0);
	printf("你的整数逆序后为: %d",x); 
	return 0;
}
