#include<stdio.h>
int main()
{
	int price,bill;
	printf("请输入商品价格(元):");
	scanf("%d",&price); 
	printf("请输入客户给钱金额(元):");
	scanf("%d",&bill);
	if (price > bill){
		printf("抱歉, 您支付的金额不够, 还差%d元.",price - bill);
	} 
	else {
		printf("找您%d元, 祝您购物愉快.",bill - price);
	}
	return 0;
}
