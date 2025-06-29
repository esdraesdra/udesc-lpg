#include <stdio.h>

int main() {
    int opcao;
    float x, y, resultado;

    do {
        printf("\nMenu de Operações:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &x);
            printf("Digite o segundo número: ");
            scanf("%f", &y);
        }

        switch(opcao) {
            case 1:
                resultado = x + y;
                printf("%.2f + %.2f = %.2f\n", x, y, resultado);
                break;
            case 2:
                resultado = x - y;
                printf("%.2f - %.2f = %.2f\n", x, y, resultado);
                break;
            case 3:
                resultado = x * y;
                printf("%.2f * %.2f = %.2f\n", x, y, resultado);
                break;
            case 4:
                if (y != 0) {
                    resultado = x / y;
                    printf("%.2f / %.2f = %.2f\n", x, y, resultado);
                } else {
                    printf("ERRO\n");
                }
                break;
            case 5:
                break;
            default:
                printf("ERRO\n");
        }

    } while (opcao != 5);

    return 0;
}
