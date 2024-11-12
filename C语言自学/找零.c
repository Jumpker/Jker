#include <stdio.h>
int main()
{
	int price = 0;
	printf("请输入商品价格(元):");
	scanf("%d",&price);
	int money = 0;
	printf("请输入交易金额(元):");
	scanf("%d",&money);
	int change = money - price;
	printf("应该找您%d元.\n", change); 
}
