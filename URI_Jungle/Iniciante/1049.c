#include <stdio.h>
#include <string.h>

#define T 15

int main(void){

  char palavra1[T],
      palavra2[T],
      palavra3[T];
      
  //Leitura das strings
  fgets(palavra1, sizeof(palavra1), stdin);
  fgets(palavra2, sizeof(palavra2), stdin);
  fgets(palavra3, sizeof(palavra3), stdin);
  
  //Comparação e definição dos tipos
  
  //Vertebrado
  if(!strcmp(palavra1,"vertebrado\n")){
    if(!strcmp(palavra2,"ave\n")){
      if(!strcmp(palavra3,"carnivoro\n"))
	printf("aguia\n");
      else if(!strcmp(palavra3,"onivoro\n"))
	printf("pomba\n");
    }
    else if(!strcmp(palavra2,"mamifero\n")){
      if(!strcmp(palavra3,"onivoro\n"))
	printf("homem\n");
      else if(!strcmp(palavra3,"herbivoro\n"))
	printf("vaca\n");
    }
  }
  //Invertebrado
  else if(!strcmp(palavra1,"invertebrado\n")){
    if(!strcmp(palavra2,"inseto\n")){
      if(!strcmp(palavra3,"hematofago\n"))
	printf("pulga\n");
      else if(!strcmp(palavra3,"herbivoro\n"))
	printf("lagarta\n");
    }
    else if(!strcmp(palavra2,"anelideo\n")){
      if(!strcmp(palavra3,"hematofago\n"))
	printf("sanguessuga\n");
      else if(!strcmp(palavra3,"onivoro\n"))
	printf("minhoca\n");
    }
  }
  
  return 0;
}