#include<stdio.h>

int fatorial(int n);

int main(){
  printf("fatorial: %d\n", fatorial(5));

  return 0;
}

int fatorial(int n){
  if(n == 0){
    return 1;
  }

  return n * fatorial(n - 1);
}