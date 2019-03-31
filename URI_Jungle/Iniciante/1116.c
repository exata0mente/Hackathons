/*
Autor: Ricardo Bezerra
Data: 31/03/2019
Dividindo X por Y
*/

#include <stdio.h>

int main(void){
  int n, i, x, y;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d %d%*c", &x, &y);
    if(y == 0)
      printf("divisao impossivel\n");
    else
      printf("%.1f\n", (float)x / y);
  }
  return 0;
}
