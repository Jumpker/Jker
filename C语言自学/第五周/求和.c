#include<stdio.h>

void main(){
	int n,x=1;
	float i,y;
	printf("��Ҫ�ӵ�����? ");
	scanf("%d",&n); 
	 for(i=1; i<=n; i++){
		y += x*(1/i);
		x *= -1;
	}
	printf("�õ���ͽ��: %f",y);
} 
