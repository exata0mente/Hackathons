#include <stdio.h>

int main(void){
  
  int N, i;
  
  scanf("%d", &N);
  
  i = 1;
  while(i <= 10){
    printf("%d x %d = %d\n", i, N, i * N);
    i++;
  }
  
  return 0;
}