#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	//printf("%d",(a<b?a:b)<c?(a<b?a:b):c); //�ּҰ�
	printf("%d",a<b?(a<c?a:c):(b<c?b:c));; 
}
