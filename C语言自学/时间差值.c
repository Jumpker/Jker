#include <stdio.h>
int main()
{
	printf("请输入时间1, 请使用24小时制, 时和分中间用':'隔开:\n");
	int hour1,minute1; 
	scanf("%d:%d",&hour1,&minute1);
	printf("请输入时间2, 请使用24小时制, 时和分中间用':'隔开:\n");
	int hour2,minute2;
	scanf("%d:%d",&hour2,&minute2);
	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;
	printf("时间1 比 时间2 快了%d小时%d分",(time1-time2)/60,(time1-time2)%60);
	return 0;
}
