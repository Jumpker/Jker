#include <stdio.h>
int main()
{
	int price = 0;
	printf("��������Ʒ�۸�(Ԫ):");
	scanf("%d",&price);
	int money = 0;
	printf("�����뽻�׽��(Ԫ):");
	scanf("%d",&money);
	int change = money - price;
	printf("Ӧ������%dԪ.\n", change); 
}
