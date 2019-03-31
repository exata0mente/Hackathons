/*
Autor: Ricardo Bezerra
Data: 31/03/2019
Validação de Nota
*/

int nota_valida(double); // Protótipo de função para validar a nota [0, 10]

#include <stdio.h>

int main(void){

  double n1, media;
  unsigned short int cont;

  for(cont = 0, media = 0.0; cont < 2;){

    scanf("%lf%*c", &n1);

    if(nota_valida(n1)){
      media += n1 / 2.0;
      cont++;
    }
    else
      printf("nota invalida\n");
  }
  printf("media = %.2lf\n", media);

  return 0;
}

int nota_valida(double nota){
  if(nota < 0.0 || nota > 10.0)
    return 0;
  else
    return 1;
}
