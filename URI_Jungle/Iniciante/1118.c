/*
Autor: Ricardo Bezerra
Data: 31/03/2019
Varias Notas Validação de Nota
*/

int nota_valida(double);      // Protótipo de função para validar a nota [0, 10]
int continua_calculo(void);   // Para validar se o cálculo deve continuar

#include <stdio.h>

int main(void){

  double n1,
         media;
  unsigned short int cont;

  do{
    for(cont = 1, media = 0.0; cont <= 2;){

      scanf("%lf%*c", &n1);

      if(nota_valida(n1)){
        media += n1 / 2.0;
        cont++;
      }
      else
        printf("nota invalida\n");
      }

      printf("media = %.2lf\n", media);

    } while (continua_calculo());

  return 0;
}

int nota_valida(double nota){
  if(nota < 0.0 || nota > 10.0)
    return 0;
  else
    return 1;
}

int continua_calculo(void){
  unsigned short int opc;
  do {
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%hu%*c", &opc);
  } while(opc < 1 || opc > 2);

  if(opc == 1)
    return 1;
  else
    return 0;
}
