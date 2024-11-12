#include<stdio.h>
int main()
{
	double x = 0;
	int n = 0; 
	int y = 0; 
	printf("这是一个平均数计算器, 请你输入正整数, 一次一个\n");
	do {
		printf("请输入算子, 一次一个, 当输入结束后请输入'-1': ");
		scanf("%d",&y);
		if (y != -1){
			x += y;
			n++;
		}
	} while (y != -1); 
	printf("非常好! 你最后得到的平均数是: %f",x/n);
	return 0;
}
