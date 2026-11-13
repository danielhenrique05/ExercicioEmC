#include<stdio.h>

int soma_ate(int n);

int main(){
  

  return 0;
}

int soma_ate(int n){
  if(n <= 0){
    return 0;
  }

  return n + soma_ate(n - 1);
} 

int interativo(int n){
  int resultado = 0;

  for (int i = n; i > 0; i--){
    resultado += i;
  }

  return resultado;
}