#include<stdio.h>

int main(void){
  float altura, largura, profundidade;
  float volume;

  printf("Informe a altura: ");
  scanf("%f" , &altura);

  printf("Informe a largura: ");
  scanf("%f" , &largura);

  printf("Informe a profundidade: ");
  scanf("%f" , &profundidade);

  volume = altura * largura * profundidade;

  printf("O volume do paralelepipedo é de : %.2f", volume);
}