#include <stdio.h>
int main(){
	int score;
	char level;
	printf("점수: ");
	scanf("%d",&score);
	
	if(score>=90) level='A';
	else if(score>=80) level='B';
	else if(score>=70) level='C';
	else if(score>=60) level='D';
	else level='F';
	
	printf("결과: %c",level);
} 
