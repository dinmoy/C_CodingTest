#include <stdio.h>
int main(){
	int i,num1,num2,sum=0;
	
	printf("ù��°: ");
	scanf("%d",&num1);
	printf("�ι�°: ");
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
	
	printf("�հ�: %d",sum);
	
	return 0; 
}
