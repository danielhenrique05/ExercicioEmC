#include <stdio.h>

long long fibonacci(int n);
long long fiboInterativa(int n);

int main(){
  printf("%lld\n", fibonacci(47));
  printf("%lld", fiboInterativa(47));
  return 0;
}

long long fibonacci(int n){
  if(n == 0 || n == 1){
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

long long fiboInterativa(int n){
  if (n == 0) {
        return 0;
    }

  long long anterior = 0;
  long long atual = 1;

  for(int i = 2; i <= n ; i ++){
    long long proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }

  return atual;

}