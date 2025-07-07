#include <stdio.h>
#include <stdlib.h>
#include "jogos.h"

int main() {
    Jogo *jogos = NULL;
    int total = 0;
    int opcao, id;
    char c;

    carregar_csv(&jogos, &total, "jogos.csv");

    do  {
  	printf("\n---- GERENCIADOR DE REGISTROS  ---\n");
        printf("1. Inserir novo jogo\n");
        printf("2. Remover jogo\n");
        printf("3. Editar jogo\n");
        printf("4. Listar todos os jogos\n");
        printf("5. Consultar jogo por ID\n");
        printf("6. Salvar e sair\n");
	printf("------------------------------------\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);
	//problema
        while ((c = getchar()) != '\n' && c != EOF);

        switch(opcao) {
            case 1:
		while ((c = getchar()) != '\n' && c != EOF);
                inserir_jogo(&jogos, &total);
                break;
            case 2:
                printf("ID do jogo a remover: ");
                scanf("%d", &id);
                while ((c = getchar()) != '\n' && c != EOF);
                remover_jogo(&jogos, &total, id);
                break;
            case 3:
                printf("ID do jogo a editar: ");
                scanf("%d", &id);
                while ((c = getchar()) != '\n' && c != EOF);
                editar_jogo(jogos, total, id);
                break;
            case 4:
                listar_jogos(jogos, total);
                break;
            case 5:
                printf("ID do jogo a consultar: ");
                scanf("%d", &id);
                while ((c = getchar()) != '\n' && c != EOF);
                listar_jogo(jogos, total, id);
                break;
            case 6:
                salvar_csv(jogos, total, "jogos.csv");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 6);

    free(jogos);
    return 0;
}

