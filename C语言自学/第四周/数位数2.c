#include<stdio.h>
int main()
{
	printf("������һ������, �����ж�λ��:");
	int num=0,n=0;
	scanf("%d",&num);
	do{
		n++;
		num /= 10;
	} while(num>0);
	printf("��������λ����:%d",n);
	return 0;
}
