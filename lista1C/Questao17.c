#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operacao (+, -, *, /, :): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
        case ':':  
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}