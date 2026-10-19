#include<stdio.h>

int main(void){
  float nota1 , nota2, media;

  printf("Informe a nota1: ");
  scanf("%f", &nota1);
  printf("Informe a nota2: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) /2.0;

  if(media >= 7.0){
    printf("Voce está aprovado!, sua media foi: %.2f", media);
  }else if (media > 3 && media < 6){
    printf("Voce está de recuperação!, sua media foi: %.2f", media);
  }else{
    printf("Voce está reprovado! sua media foi: %.2f", media);
  }
  
}