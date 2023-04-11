#include <stdio.h>
main(){
int N = 0, S =0;
   do {
      N++;
      S += N;
      N++;
      S-=N;
   }while (N!=100); 
  printf("%d\n", S);
}
