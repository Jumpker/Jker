#include<stdio.h>

void main(){
	int n,x=1;
	float i,y;
	printf("你要加到多少? ");
	scanf("%d",&n); 
	 for(i=1; i<=n; i++){
		y += x*(1/i);
		x *= -1;
	}
	printf("得到求和结果: %f",y);
} 
