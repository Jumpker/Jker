#include<stdio.h>
int main()
{
	int num;
	int n=0;
	scanf("%d",&num);
	n++;
	num/=10; 
	while (num > 0){
		n++;
		num/=10;
	}
	printf("Î»ÊıÊÇ%d",n);
}
