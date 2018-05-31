#include <stdio.h>

int main(void){
  
  int i, j, r;
  int I, J;
  
  r = 2;
  I = 1;
  
  // a_n = a_1 + (n - 1)*r
  // n = 5
  
  for(i = 0; i < 5; i++){
    J = 7 + i * r;  
    for(j = 0; j < 3; j++,J--){
      printf("I=%d J=%d\n", I, J);
    }
    I += r;
  }
  
  
  return 0;
}