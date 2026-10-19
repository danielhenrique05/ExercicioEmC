#include <stdio.h>

int main() {
    int n;
    int pares = 0, impares = 0;
    int maiorPar, menorPar;
    int maiorImpar, menorImpar;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        
        if (n % 2 == 0) {
            if (pares == 0) {
                maiorPar = n;
                menorPar = n;
            } else {
                if (n > maiorPar) {
                    maiorPar = n;
                }
                if (n < menorPar) {
                    menorPar = n;
                }
            }
            pares++;
        } else {
            if (impares == 0) {
                maiorImpar = n;
                menorImpar = n;
            } else {
                if (n > maiorImpar) {
                    maiorImpar = n;
                }
                if (n < menorImpar) {
                    menorImpar = n;
                }
            }
            impares++;
        }
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    if (pares > 0) {
        printf("Maior par: %d\n", maiorPar);
        printf("Menor par: %d\n", menorPar);
    } else {
        printf("Nao existem numeros pares.\n");
    }

    if (impares > 0) {
        printf("Maior impar: %d\n", maiorImpar);
        printf("Menor impar: %d\n", menorImpar);
    } else {
        printf("Nao existem numeros impares.\n");
    }

    return 0;
}