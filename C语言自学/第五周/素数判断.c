#include<stdio.h>

void main(){
	int x,y=0;
	printf("������һ������, �����ж����ǲ�������: ");
	scanf("%d",&x);
	int i; 
	for(i=2; i<x; i++){
		if(x%i == 0){
			y = 1;
			break;}
	}
	if (y)
		printf("�ⲻ��һ������!");
	else
		printf("����һ������!"); 
} 
