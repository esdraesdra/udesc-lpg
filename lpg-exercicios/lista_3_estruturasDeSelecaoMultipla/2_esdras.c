#include <stdio.h>

int main(){
    int opcao,opcao2;

    printf("Que categoria de Filme/Serie deseja ver?\n");
    printf("1. Filme;\n");
    printf("2. Serie;\n");
    printf("3. Documentario;\n");

    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("Que subcategoria de Filme deseja ver?\n");
            printf("1. Acao;\n");
            printf("2. Suspense;\n");

            scanf("%d", &opcao2);
            switch (opcao2) {
                case 1:
                    printf("A orfa");
                break;
                case 2:
                    printf("Batman: O cavaleiro das trevas;");
                break;
                default:
                    printf("Opcao invalida;");
                break;
            }
        break;
        case 2:
        printf("Que subcategoria de Serie deseja ver?\n");
        printf("1. Drama;\n");
        printf("2. Comedia;\n");

        scanf("%d", &opcao2);
        switch (opcao2) {
            case 1:
                printf("Revenge");
            break;
            case 2:
                printf("How do I met yout mother;");
            break;
            default:
                printf("Opcao invalida;");
            break;
        }
        break;
        case 3:
        printf("Que subcategoria de Documentario deseja ver?\n");
        printf("1. Investigacao;\n");
        printf("2. Ciencia;\n");

        scanf("%d", &opcao2);
        switch (opcao2) {
            case 1:
                printf("Deep Web;");
            break;
            case 2:
                printf("Terra;");
            break;
            default:
                printf("Opcao invalida;");
            break;
        }
        break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}