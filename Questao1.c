#include <stdio.h>

int main(void){
  int nota1 ;
  int nota2;
  float media;

  printf("informe sua primeira nota: ");
  scanf("%d", &nota1);

  printf("Informe sua segunda nota: ");
  scanf("%d", &nota2);

  media = (nota1 + nota2)/2.0; 
  printf("Sua media foi de: %.2f", media);
  
}