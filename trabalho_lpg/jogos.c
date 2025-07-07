#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogos.h"

void inserir_jogo(Jogo **jogos, int *total) {
    system("clear");
    *jogos = realloc(*jogos, (*total + 1) * sizeof(Jogo));//Realoca espaço no vetor para adicionar mais 1 jogo
    Jogo *novo = &(*jogos)[*total];	//Aponta para a nova posição do jogo no vetor.

    //se ja tiver um jogo adicionado, pega o ultimo e adiciona 1, caso nao tenha comeca com 1
    novo->id = (*total > 0) ? (*jogos)[*total - 1].id + 1 : 1; 

    printf("\nTitulo: ");
    fgets(novo->titulo, 100, stdin); //usando fgets ja que o titulo pode ter espacos max 99 char
    novo->titulo[strcspn(novo->titulo, "\n")] = '\0'; //tira o \n do enter e colocar o \0

    printf("Genero: ");
    fgets(novo->genero, 50, stdin); 
    novo->genero[strcspn(novo->genero, "\n")] = '\0';

    printf("Status (Jogado, Jogando, Planejado): ");
    fgets(novo->status, STATUS_MAX, stdin);
    novo->status[strcspn(novo->status, "\n")] = '\0';

    (*total)++;
    printf("Jogo adicionado a biblioteca.\n");
}

void remover_jogo(Jogo **jogos, int *total, int id) {
    system("clear");
    int i, encontrado = 0;

    //prcurar o id
    for (i = 0; i < *total; i++) {
        if ((*jogos)[i].id == id) {
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("ID nao encontrado.\n");
        return;
    }

    //COMECA O LOOP JA NO VALOR E SUBSTITUI COM O PROXIMO
    for (int j = i; j < *total - 1; j++) {
        (*jogos)[j] = (*jogos)[j + 1];
    }
	
    //TIRA O ULTIMO
    (*total)--;
    //REEALOCA
    *jogos = realloc(*jogos, (*total) * sizeof(Jogo));
  
}

void editar_jogo(Jogo *jogos, int total, int id) {
	system("clear");

	//vai rodar ate achar o item e dps pedir o valor novamente
	for (int i = 0; i < total; i++) {
        	if (jogos[i].id == id) {
            		printf("\nNovo titulo: ");
            		fgets(jogos[i].titulo, 100, stdin);
            		jogos[i].titulo[strcspn(jogos[i].titulo, "\n")] = '\0';
			printf("Novo genero: ");
            		fgets(jogos[i].genero, 50, stdin);
            		jogos[i].genero[strcspn(jogos[i].genero, "\n")] = '\0';

            		printf("Novo status: ");
            		fgets(jogos[i].status, STATUS_MAX, stdin);
            		jogos[i].status[strcspn(jogos[i].status, "\n")] = '\0';

            		printf("Jogo alterado!\n");
            		return;
        	}
    	}
    	printf("ERRO id nao existe.\n");
}

//bem simples vai ler os campos um por um pelo loop
void listar_jogos(Jogo *jogos, int total) {
	system("clear");
    	printf("\nLista de Jogos:\n");
    	for (int i = 0; i < total; i++) {
        	printf("ID: %d | Titulo: %s | Genero: %s | Status: %s\n",
            	jogos[i].id, jogos[i].titulo, jogos[i].genero, jogos[i].status);
    	}
}

//lista apenas um
void listar_jogo(Jogo *jogos, int total, int id) {
	system("clear");
    	for (int i = 0; i < total; i++) {
        	if (jogos[i].id == id) { //pega apenas o escolhido pelo usuario
            		printf("\nID: %d\nTitulo: %s\nGenero: %s\nStatus: %s\n", jogos[i].id, jogos[i].titulo, jogos[i].genero, jogos[i].status);
            		return;
        	}
    	}
    	printf("ID nao encontrado.\n");
}

void salvar_csv(Jogo *jogos, int total, const char *filename) {
	system("clear");

	FILE *fp = fopen(filename, "w"); //CRIAR PONTEIRO PARA ESCRITA WRITE
    	if (!fp) { //caso de problema ao abrir o arquivo
        	printf("Erro ao abrir o arquivo para salvar.\n");
        	return;
    	}

    	for (int i = 0; i < total; i++) {
        	fprintf(fp, "%d,%s,%s,%s\n", jogos[i].id, jogos[i].titulo, jogos[i].genero, jogos[i].status); //escreve na planiljha
    	}
	fclose(fp); //fecha o ponteiro
}

//vai ler a planilha e adiciona no vetor
void carregar_csv(Jogo **jogos, int *total, const char *filename) {
	system("clear");

    	FILE *fp = fopen(filename, "r"); //abre pra ler
    	if (!fp) return; //checa se deu erro

    	char linha[256]; //gaurda a info da linha
    	*total = 0;
    	*jogos = NULL;

    	while (fgets(linha, sizeof(linha), fp)) { //roda em cada linha ate chegar no final
        	*jogos = realloc(*jogos, (*total + 1) * sizeof(Jogo)); //redimensiona conforme os valores novos
		//usar sscanf pra ler ate a virgula
        	sscanf(linha, "%d,%99[^,],%49[^,],%29[^\n]", &(*jogos)[*total].id, (*jogos)[*total].titulo, (*jogos)[*total].genero, (*jogos)[*total].status); 
		(*total)++;
    	}
    	fclose(fp);
}

