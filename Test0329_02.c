#include <stdio.h>
int main(void){
	int a=1,b=1,c,s=2,n=2;
	do{
		c=a+b;
		s=s+c;
		n=n+1;
		
		if(n==5) break;
		a=b;
		b=c;
	}while(n<=5);
	printf("total=%dÀÔ´Ï´Ù\n",s);

}
