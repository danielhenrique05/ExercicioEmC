#include<stdio.h>

int nota_valida(float nota);
int calcular_media(int nota1, int nota2);
char* situacao(float nota1, float nota2);

int main (){

  
  printf("A média do aluno é: %d\n", calcular_media(8,9));
  printf("a situação do aluno é: %s\n", situacao(8,9));
  printf("Nota valida: %d\n", nota_valida(7));

  return 0;
}


int nota_valida(float nota){
  if(nota >= 0 && nota <= 10){
    return 1;
  }else{
    return 0; 
  }
}

int calcular_media(int nota1, int nota2){
  return (nota1 + nota2)/ 2;
}

char* situacao(float nota1, float nota2){
  float media = calcular_media(nota1, nota2);

  if(media >= 7){
    return "Aprovado";
  }else{
    return "Reprovado";
  }
}

