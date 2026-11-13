#include<stdio.h>

int main(void){
  int distancia;
  int combustivel;
  float consumoMedio;

  printf("informe a distancia percorrida em KM: ");
  scanf("%d", &distancia);

  printf("Quantos litros de combustivel consumiu: ");
  scanf("%d", &combustivel);

  consumoMedio = distancia / combustivel;
  printf("O consumo medio de gasolina é: %.2f", consumoMedio);

}