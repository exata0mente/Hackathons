#include <stdio.h>

int main(void){

    int hora_ini,
        min_ini,
        hora_fim,
        min_fim,
        resultado;
        
    scanf("%d%d%d%d", &hora_ini, &min_ini, &hora_fim, &min_fim);
    
    //Convertendo em minutos
    hora_ini = hora_ini * 60;
    hora_fim = hora_fim * 60;
    
    if((hora_fim + min_fim) <= (hora_ini + min_ini))
        hora_fim += 24 * 60;
    
    resultado = (hora_fim + min_fim) - (hora_ini + min_ini);
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultado / 60, resultado % 60);
        
    return 0;

}