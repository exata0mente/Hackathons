#include <stdio.h>

int main(void){
  
  int i, N;
  double A, B, C, media;
  
  scanf("%d", &N);
  
  for(i = 0; i < N; i++){
    scanf("%lf%lf%lf", &A, &B, &C);  
    media = A * 0.2 + B * 0.3 + C * 0.5;  
    printf("%.1lf\n", media);
  }
  
  return 0;
}