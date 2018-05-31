#include <stdio.h>

int main(void){
  double salario, imposto;
  
  scanf("%lf", &salario);
  
  imposto = 0.0;
  
  if((salario - 4500) > 0){
    imposto += (salario - 4500) * 0.28;
    salario -= salario - 4500;
  }
  if((salario - 3000) > 0){
    imposto += (salario - 3000) * 0.18;
    salario -= salario - 3000;
  }
  if((salario - 2000) > 0){
    imposto += (salario - 2000) * 0.08;
    salario -= salario - 2000;
  }
  
  if(imposto)
    printf("R$ %.2lf\n",imposto);
  else
    printf("Isento\n");
    
  return 0;
}