#define JOGOS_H

#define STATUS_MAX 30
#define TITULO_MAX 100
#define GENERO_MAX 50

typedef struct {
    int id;
    char titulo[TITULO_MAX];
    char genero[GENERO_MAX];
    char status[STATUS_MAX]; // Jogado Jogando Planejado
} Jogo;

void inserir_jogo(Jogo **jogos, int *total);
void remover_jogo(Jogo **jogos, int *total, int id);
void editar_jogo(Jogo *jogos, int total, int id);
void listar_jogos(Jogo *jogos, int total);
void listar_jogo(Jogo *jogos, int total, int id);
void salvar_csv(Jogo *jogos, int total, const char *filename);
void carregar_csv(Jogo **jogos, int *total, const char *filename);
