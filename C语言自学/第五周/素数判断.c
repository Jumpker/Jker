#include<stdio.h>

void main(){
	int x,y=0;
	printf("请输入一个整数, 我来判断它是不是素数: ");
	scanf("%d",&x);
	int i; 
	for(i=2; i<x; i++){
		if(x%i == 0){
			y = 1;
			break;}
	}
	if (y)
		printf("这不是一个素数!");
	else
		printf("这是一个素数!"); 
} 
