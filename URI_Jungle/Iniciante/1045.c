#include <stdio.h>

int main(void){

    double triangulo[3], aux;
    int i, j;
    
    scanf("%lf", &triangulo[0]);
    scanf("%lf", &triangulo[1]);
    scanf("%lf", &triangulo[2]);
    
    //Ordenação do vetor
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(triangulo[i] < triangulo[j]){
                aux = triangulo[i];
                triangulo[i] = triangulo[j];
                triangulo[j] = aux;
            }
        }
    }
    
    //Validações
    
    if(triangulo[0] >= (triangulo[1] + triangulo[2])){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    
    triangulo[0] *= triangulo[0];
    triangulo[1] *= triangulo[1];
    triangulo[2] *= triangulo[2];
    
    if(triangulo[0] == (triangulo[1] + triangulo[2]))
        printf("TRIANGULO RETANGULO\n");
        
    
    if(triangulo[0] > (triangulo[1] + triangulo[2]))
        printf("TRIANGULO OBTUSANGULO\n");
    
    if(triangulo[0] < (triangulo[1] + triangulo[2]))
        printf("TRIANGULO ACUTANGULO\n");
    
    if(triangulo[0] == triangulo[1] && triangulo[1] == triangulo[2])
        if(triangulo[0] == triangulo[1]
        printf("TRIANGULO EQUILATERO\n");
    
    
    
    return 0;

}