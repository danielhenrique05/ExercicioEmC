#include <stdio.h>

int main() {
    int n, num, i;
    int pares = 0, impares = 0;
    int maiorPar, menorPar;
    int maiorImpar, menorImpar;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            if (pares == 0) {
                maiorPar = num;
                menorPar = num;
            } else {
                if (num > maiorPar) {
                    maiorPar = num;
                }

                if (num < menorPar) {
                    menorPar = num;
                }
            }

            pares++;
        } else {
            if (impares == 0) {
                maiorImpar = num;
                menorImpar = num;
            } else {
                if (num > maiorImpar) {
                    maiorImpar = num;
                }

                if (num < menorImpar) {
                    menorImpar = num;
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