#include <stdio.h>
int main(){
	int score;
	char level;
	printf("����: ");
	scanf("%d",&score);
	
	if(score>=90) level='A';
	else if(score>=80) level='B';
	else if(score>=70) level='C';
	else if(score>=60) level='D';
	else level='F';
	
	printf("���: %c",level);
} 
