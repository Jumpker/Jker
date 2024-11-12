#include<stdio.h>
int main()
{
	int marks;
	char goal="0";
	scanf("%d",&marks);
	int mark = marks/10;
	switch (mark){
		case 9:
			goal = "A";
		break;
		
		case 8:
			goal = "B";
		break;
		
		case 7:
			goal = "C";
		break;
		
		case 6:
			goal = "D";
		break;
		
		default:
			goal = "E";
		break;
	}
	printf("µÈ¼¶Îª:%d",goal);
	return 0;
 } 
