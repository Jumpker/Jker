#include<stdio.h>
int main()
{
	double cm;
	scanf("%lf",&cm);
	int foot = cm/100/0.3048;
	int inch = ((cm/100/0.3048) - foot)*12;
	printf("%d %d",foot,inch);
	return 0;
 } 
