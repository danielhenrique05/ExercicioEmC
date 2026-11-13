#include <stdio.h>

int main(void) {
    int maior, menor, a, b, diferenca;

    a = 10;
    b = 20;

    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    diferenca = maior - menor;
    int listaImp[diferenca > 0 ? diferenca : 1];

    int index = 0;

    for (int i = menor; i < maior; i++) {
        if (i % 2 != 0) {
            listaImp[index] = i;
            index++;
        }
    }

    printf("\n--- LISTA COMPLETA SALVA ---\n");
    printf("[");

    for (int i = 0; i < index; i++) {
        printf("%d", listaImp[i]);

        if (i < index - 1) {
            printf(", ");
        }
    }

    printf("]\n");

    return 0;
}