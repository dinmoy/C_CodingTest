#include <stdio.h>
int main(){
	int kor,eng;
	printf("���� 1: ");
	scanf("%d",&kor); 
	printf("���� 2: ");
	scanf("%d",&eng);
	if(kor>60 && eng>60) 
		printf("�հ�\n �� ���߾��");
	else
		printf("���հ�\n �� �� �������ϼ���"); 
}
