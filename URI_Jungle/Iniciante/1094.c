#include <stdio.h>

int main(void){
  
  int quantia,
      i,
      N,
      coelhos,
      ratos,
      sapos;
  
    char tipo;
    double percentual;
  
  scanf("%d%*c", &N);
  
  coelhos = 0;
  ratos = 0;
  sapos = 0;
  
  for(i = 0; i < N; i++){
    scanf("%d %c%*c", &quantia, &tipo);
    if(tipo == 'C')
      coelhos += quantia;
    if(tipo == 'R')
      ratos += quantia;
    if(tipo == 'S')
      sapos += quantia;
  }
  //Dashboard
  printf("Total: %d cobaias\n", coelhos + ratos + sapos);
  printf("Total de coelhos: %d\n", coelhos);
  printf("Total de ratos: %d\n", ratos);
  printf("Total de sapos: %d\n", sapos);
  
  percentual = (double)coelhos / (coelhos + ratos + sapos) * 100;
  printf("Percentual de coelhos: %.2lf \%\n", percentual);
  
  percentual = (double)ratos / (coelhos + ratos + sapos) * 100;
  printf("Percentual de ratos: %.2lf \%\n", percentual);
  
  percentual = (double)sapos / (coelhos + ratos + sapos) * 100;
  printf("Percentual de sapos: %.2lf \%\n", percentual);
  
  return 0;
}