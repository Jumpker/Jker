#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{ 
	srand(time(0));
	int b = rand();
	int a = b%100;
	printf("���Ѿ������һ��100���ڵ�����, �������²°�~\n\n");
	int n = 0;
	int cai;
	do{
		printf("����������µ���:");
		scanf("%d",&cai);
		if (cai == a){
			printf("������!\n\n");
			n++;
		}else if(cai > a){
			printf("�´���, ����Ŭ��Ŷ~\n\n");
			n++;
		}else if(cai < a){
			printf("��С��, ����Ŭ��Ŷ~\n\n");
			n++;
		} 
	} while(cai != a);
	if (n < 7){
		printf("��һ������%d��! �������!\n\n",n);
	}else{
		printf("��һ������%d��! ���! ��~�Ͷ���~\n\n",n);
	}
	do{
		printf("���ٴ���������е������Խ�������:");
		scanf("%d",&cai);
		if (cai != a){
			printf("����! ����еĲ������! ");
		}
	}while(cai != a);
	return 0;
}
