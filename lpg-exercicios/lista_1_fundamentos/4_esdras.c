#include <stdio.h>
int main()
{
    int idade;
    float peso;
    char nome[21], tipo;

    printf("Qual o nome do seu pet?\n");
    scanf(" %s", &nome);
    printf("Qual a idade do seu pet?\n");
    scanf(" %d", &idade);
    printf("Qual o peso do seu pet?\n");
    scanf(" %f", &peso);
    printf("Qual o tipo do seu pet?\n Digite C para cachorro e G para gato!\n");
    scanf(" %c", &tipo);

    printf("Nome: %s\n", nome);
    printf("Nome: %d\n", idade);
    printf("Nome: %.2f\n", peso);
    printf("Nome: %c\n", tipo);
    return 0;
}
