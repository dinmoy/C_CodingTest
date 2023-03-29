#include <stdio.h>
void main(){
	int A=1,B=1,S=A+B;
	int N=2;int C=0;
		printf("피보나치수열=%d",A);
		
	while(1){
		printf("%d",A);
		C=A+B;
		S+=C;
		A=B;
		B=C;
		N++;
		printf("%d",B);
		if(N==5) break;
	}
	printf("\n 합 = %d",S);
}
