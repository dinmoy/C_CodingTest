#include <stdio.h>
int main(){
	int i,num1,num2,sum=0;
	
	printf("첫번째: ");
	scanf("%d",&num1);
	printf("두번째: ");
	scanf("%d",&num2);
	if(num1>num2){
		for(i=num2;i<=num1;i++){
			sum+=i;
		}
	}else{
		for(i=num1;i<=num2;i++){
			sum+=i;
		}
	}
	
	printf("합계: %d",sum);
	
	return 0; 
}
