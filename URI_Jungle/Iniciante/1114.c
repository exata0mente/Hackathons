/*
Autor: Ricardo Bezerra
Data: 31/03/2019
Senha Fixa
*/

#include <stdio.h>

int main(void){
  int senha_digitada, senha_valida;

  senha_valida = 2002;

  do {
    scanf("%d", &senha_digitada);
    if(senha_digitada != senha_valida)
      printf("Senha Invalida\n");
    else
      printf("Acesso Permitido\n");
  } while(senha_digitada != senha_valida);

  return 0;
}
