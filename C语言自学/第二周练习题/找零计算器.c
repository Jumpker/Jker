#include<stdio.h>
int main()
{
	int price,bill;
	printf("��������Ʒ�۸�(Ԫ):");
	scanf("%d",&price); 
	printf("������ͻ���Ǯ���(Ԫ):");
	scanf("%d",&bill);
	if (price > bill){
		printf("��Ǹ, ��֧���Ľ���, ����%dԪ.",price - bill);
	} 
	else {
		printf("����%dԪ, ף���������.",bill - price);
	}
	return 0;
}
