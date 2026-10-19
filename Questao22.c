#include<stdio.h>
#include<math.h>

int main(void){
    float x;
    float resultado = 1.0;
    int n;

    printf("Digite a base: ");
    scanf("%lf", &x);

    printf("Digite o expoente: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        resultado *= x;
    }

    printf("Resultado: %.2f\n", resultado);

}