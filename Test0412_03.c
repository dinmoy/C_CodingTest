#include <stdio.h>
int main(){
	int kor,eng;
	printf("점수 1: ");
	scanf("%d",&kor); 
	printf("점수 2: ");
	scanf("%d",&eng);
	if(kor>60 && eng>60) 
		printf("합격\n 참 잘했어요");
	else
		printf("불합격\n 좀 더 열심히하세요"); 
}
