#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{ 
	srand(time(0));
	int b = rand();
	int a = b%100;
	printf("我已经想好了一个100以内的整数, 请你来猜猜吧~\n\n");
	int n = 0;
	int cai;
	do{
		printf("请你输入你猜的数:");
		scanf("%d",&cai);
		if (cai == a){
			printf("猜中了!\n\n");
			n++;
		}else if(cai > a){
			printf("猜大了, 继续努力哦~\n\n");
			n++;
		}else if(cai < a){
			printf("猜小了, 继续努力哦~\n\n");
			n++;
		} 
	} while(cai != a);
	if (n < 7){
		printf("你一共猜了%d次! 运气真好!\n\n",n);
	}else{
		printf("你一共猜了%d次! 真菜! 菜~就多练~\n\n",n);
	}
	do{
		printf("请再次输入你猜中的数字以结束程序:");
		scanf("%d",&cai);
		if (cai != a){
			printf("不对! 你猜中的不是这个! ");
		}
	}while(cai != a);
	return 0;
}
