#include<stdio.h>
int main()
{
	double x = 0;
	int n = 0; 
	int y = 0; 
	printf("����һ��ƽ����������, ��������������, һ��һ��\n");
	do {
		printf("����������, һ��һ��, �����������������'-1': ");
		scanf("%d",&y);
		if (y != -1){
			x += y;
			n++;
		}
	} while (y != -1); 
	printf("�ǳ���! �����õ���ƽ������: %f",x/n);
	return 0;
}
