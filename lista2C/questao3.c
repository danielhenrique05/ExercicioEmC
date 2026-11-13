#include<stdio.h>

int maior_de_tres(int a, int b , int c);

int main(){

  int resultado = maior_de_tres(2, 4 ,6);
  printf("maior valor:  %d", resultado);

  return 0;
}

int maior_de_tres(int a, int b, int c){
  
  if(a >= b && a >= c) return a;
  if(b >= a && b >= c) return b;
  return c;
  
}