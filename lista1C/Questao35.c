
#include <stdio.h>

void limparEntrada(void) {
    int caractere;

    while ((caractere = getchar()) != '\n' && caractere != EOF) {
    }
}

int main(void) {
    int classe, conversao;
    double valor, resultado;
    const char *unidade;

    while (1) {
        printf("\n1. Peso\n");
        printf("2. Volume\n");
        printf("3. Comprimento\n");
        printf("4. Sair\n");
        printf("Escolha a classe: ");

        if (scanf("%d", &classe) != 1) {
            if (feof(stdin)) {
                break;
            }
            printf("Entrada invalida.\n");
            limparEntrada();
            continue;
        }

        if (classe == 4) {
            printf("Programa encerrado.\n");
            break;
        }

        switch (classe) {
            case 1:
                printf("\n1.1. Libra -> Quilograma\n");
                printf("1.2. Quilograma -> Libra\n");
                printf("1.3. Onca -> Grama\n");
                printf("1.4. Grama -> Onca\n");
                break;
            case 2:
                printf("\n2.1. Galao -> Litro\n");
                printf("2.2. Litro -> Galao\n");
                printf("2.3. Onca liquida -> Mililitro\n");
                printf("2.4. Mililitro -> Onca liquida\n");
                break;
            case 3:
                printf("\n3.1. Milha -> Quilometro\n");
                printf("3.2. Quilometro -> Milha\n");
                printf("3.3. Jarda -> Metro\n");
                printf("3.4. Metro -> Jarda\n");
                break;
            default:
                printf("Classe invalida.\n");
                continue;
        }

        printf("Escolha a conversao (digite de 1 a 4): ");
        if (scanf("%d", &conversao) != 1) {
            if (feof(stdin)) {
                break;
            }
            printf("Entrada invalida.\n");
            limparEntrada();
            continue;
        }

        if (conversao < 1 || conversao > 4) {
            printf("Conversao invalida.\n");
            continue;
        }

        printf("Digite o valor a converter (use ponto para decimais): ");
        if (scanf("%lf", &valor) != 1) {
            if (feof(stdin)) {
                break;
            }
            printf("Valor invalido.\n");
            limparEntrada();
            continue;
        }

        switch (classe * 10 + conversao) {
            case 11:
                resultado = valor * 0.4536;
                unidade = "kg";
                break;
            case 12:
                resultado = valor / 0.4536;
                unidade = "libras";
                break;
            case 13:
                resultado = valor * 28.3495;
                unidade = "g";
                break;
            case 14:
                resultado = valor / 28.3495;
                unidade = "oncas";
                break;
            case 21:
                resultado = valor * 3.7854;
                unidade = "L";
                break;
            case 22:
                resultado = valor / 3.7854;
                unidade = "galoes";
                break;
            case 23:
                resultado = valor * 29.5735;
                unidade = "mL";
                break;
            case 24:
                resultado = valor / 29.5735;
                unidade = "oncas liquidas";
                break;
            case 31:
                resultado = valor * 1.6093;
                unidade = "km";
                break;
            case 32:
                resultado = valor / 1.6093;
                unidade = "milhas";
                break;
            case 33:
                resultado = valor * 0.9144;
                unidade = "m";
                break;
            case 34:
                resultado = valor / 0.9144;
                unidade = "jardas";
                break;
            default:
                continue;
        }

        printf("Resultado: %.4f %s\n", resultado, unidade);
    }

    return 0;
}