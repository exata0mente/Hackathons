#include <stdio.h>
#include <stdlib.h>

int main(void){

  int i, N;
  int *p;
  
  scanf("%d", &N);
  p = malloc(N * sizeof(int));
  
  for(i = 0; i < N; i++)
    scanf("%d", (p + i));
  
  for(i=0; i < N; i++){
    if(*(p + i) > 0){ //POSITIVO
      if(*(p + i) % 2) // IMPAR
	printf("ODD POSITIVE\n");
      else		// PAR
	printf("EVEN POSITIVE\n");
    }
    else if(*(p + i) < 0){ // NEGATIVO
      if(*(p + i) % 2)	// IMPAR
	printf("ODD NEGATIVE\n");
      else		// PAR
	printf("EVEN NEGATIVE\n");
    }
    else	// ZERO
      printf("NULL\n");
  }
  
  free(p);
  
  return 0;
}