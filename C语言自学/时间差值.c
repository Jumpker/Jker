#include <stdio.h>
int main()
{
	printf("������ʱ��1, ��ʹ��24Сʱ��, ʱ�ͷ��м���':'����:\n");
	int hour1,minute1; 
	scanf("%d:%d",&hour1,&minute1);
	printf("������ʱ��2, ��ʹ��24Сʱ��, ʱ�ͷ��м���':'����:\n");
	int hour2,minute2;
	scanf("%d:%d",&hour2,&minute2);
	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;
	printf("ʱ��1 �� ʱ��2 ����%dСʱ%d��",(time1-time2)/60,(time1-time2)%60);
	return 0;
}
