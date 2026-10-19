#include<stdio.h>

int main(void){
  float salario, novoSalario;

  printf("Informe seu salario: ");
  scanf("%d", salario);

  novoSalario = salario * 1.05;

  if (salario <= 750)
  {
    novoSalario += 100;
  }
  
  printf("Novo salario: R$ %.2f\n", novoSalario);
  
}