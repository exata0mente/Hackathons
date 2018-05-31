#include <stdio.h>

int main(void){
  int x, y, n, s, r;
  
  scanf("%d%d", &x,&y);
  
  if(x > y)
    r = -2;
  else if (x < y)
    r = 2;
  else
    n = 0;
  
  if(r > 0){
    if(x % 2)
      x = x + 2;
    else
      x = x + 1;
    if(y % 2)
      y = y - 2;
    else
      y = y - 1;
  }
  else{
    if(x % 2)
      x = x - 2;
    else
      x = x - 1;
    
    if(y % 2)
      y = y + 2;
    else
      y = y + 1;
  }
    
  //Definir a quantidade de elementos na PA
  n = (y - x + r)/r;
  
  //Definir a soma dos elementos da PA
  s = ((x + y) * n)/2;
  
  printf("%d\n", s);
  
}