#include <stdio.h>

#define T 13

int main(void){
  
  int i;
  int I, J;
  
  I = 1;
  J = 60;
  
  for(i = 0; i < T; i++)
    printf("I=%d J=%d\n", I + i * 3, J + i * (-5));
    
  return 0;
}