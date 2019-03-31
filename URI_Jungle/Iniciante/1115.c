/*
Autor: Ricardo Bezerra
Data: 31/03/2019
Quadrante
*/

#include <stdio.h>

int main(void){
  int x, y;

  do {
    scanf("%d %d%*c", &x, &y);

    if (x == 0 || y == 0)
      return 0;
    if(x > 0 && y > 0)        // Primeiro quadrante
      printf("primeiro\n");
    else if (x < 0 && y > 0)  // Segundo quadrante
      printf("segundo\n");
    else if (x < 0 && y < 0)  // Terceiro quadrante
      printf("terceiro\n");
    else if (x > 0 && y < 0)  // Quarto quadrante
      printf("quarto\n");
  } while(1);

  return 0;
}
