/*
Autor: Ricardo Bezerra
Data: 31/03/2019
Crescente e Decrescente
*/

#include <stdio.h>

int main(void){

  int x, y;

  do{
    scanf("%d %d%*c", &x, &y); //O *c no scanf é para descartar o caractere correspondente ao [ENTER]
    if(x > y)
      printf("Decrescente\n");
    else if (x < y)
      printf("Crescente\n");
  }while(x != y);

  return 0;
}
