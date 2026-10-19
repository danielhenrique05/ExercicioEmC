#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%f %f", &num1, &num2);

                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%f %f", &num1, &num2);

                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%f %f", &num1, &num2);

                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%f %f", &num1, &num2);

                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            case 5:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}