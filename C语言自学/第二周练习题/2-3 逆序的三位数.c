#include<stdio.h>
int main()
{
	int num1;
	scanf("%d",&num1);
	int ge = num1 % 10;
	int shi = (num1 % 100 - ge)/10, bai = num1 / 100;
	printf("%d",bai + shi*10 + ge*100);
 } 
