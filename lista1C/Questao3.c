#include<stdio.h>

int main(void){
  float fahrenheit;
  float celsius;

  printf("Informe os Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("A temperatura em graus Celsius é de : %.2f", celsius);

}