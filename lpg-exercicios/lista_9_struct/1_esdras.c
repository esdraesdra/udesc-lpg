#include <stdio.h>
#include <string.h>
#define N 5
#define VAZIO -1

int id_global=0;

typedef struct
{
    int id;
    char cpf[12];
    char nome[20];
    char sobrenome[20];
    int idade;
    char data_nascimento[11];
    float altura;
} Pessoa;

void inserir(Pessoa pessoas[], int id){
    for (int i = 0; i < N; i++)
    {
        if(pessoas[i].id == VAZIO){
            pessoas[i].id = id_global;
            printf("CPF:\n");
            scanf("%s", pessoas[i].cpf);
            printf("Nome:\n");
            scanf("%s", pessoas[i].nome);
            printf("Sobrenome:\n");
            scanf("%s", pessoas[i].sobrenome);
            printf("Idade:\n");
            scanf("%d", &pessoas[i].idade);
            printf("Data de Nascimento:\n");
            scanf("%s", pessoas[i].data_nascimento);
            printf("Altura:\n");
            scanf("%f", &pessoas[i].altura);
            id_global++;
            break;
        }
    }
    
    printf("\e[1;1H\e[2J");
}
void listar(Pessoa pessoas[]){
    for (int i = 0; i < N; i++)
    {
        if(pessoas[i].id != VAZIO){
            printf("ID: %d\n", pessoas[i].id);
            printf("CPF: %s\n", pessoas[i].cpf);
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Sobrenome: %s\n", pessoas[i].sobrenome);
            printf("Idade: %d\n", pessoas[i].idade);
            printf("Data de Nascimento: %s\n", pessoas[i].data_nascimento);
            printf("Altura: %.2f\n", pessoas[i].altura);
        }
    }
}



int main(int argc, char const *argv[])
{
    Pessoa pessoas[N];
    int id = 0;
    for (int i = 0; i < N; i++)
        pessoas[i].id = VAZIO;

    inserir(pessoas, id);
    listar(pessoas);
    inserir(pessoas, id);
    listar(pessoas);
    return 0;
}