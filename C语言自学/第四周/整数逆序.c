#include<stdio.h>
int main()
{
	int num;
	int x = 0;
	int end = 0; 
	printf("����һ�����������򹤾�, �������������������: ");
	scanf("%d",&num);
	do{
		if (num > 0){
		x *= 10;
		end = num % 10;
		num /= 10;
		x += end;
		}
	}while(num > 0);
	printf("������������Ϊ: %d",x); 
	return 0;
}
