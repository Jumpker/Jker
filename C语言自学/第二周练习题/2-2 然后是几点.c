#include<stdio.h>
int main()
{
	int time,minute;
	scanf("%d %d",&time,&minute);
	int hour = time/100;
	int minute_now = time%100;
	int minutes = hour*60 + minute_now + minute;
	int hour_after = minutes/60;
	int minute_after = minutes%60;
	printf("%d",hour_after*100+minute_after);
	return 0;
}
