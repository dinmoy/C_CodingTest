#include <stdio.h>
int main(){
	int j=0; int k=1;
	do{
		j=j+1;
		k=k*j;
	}while(j<5);
	printf("%d��° ���丮��:%d",j,k);
} 
