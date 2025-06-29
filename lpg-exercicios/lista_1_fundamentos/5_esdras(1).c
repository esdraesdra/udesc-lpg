#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, soma;

    printf("Digite um numero.\n");
    scanf("%d", &a);
    printf("Agora digite outro numero.\n");
    scanf("%d", &b);

    soma = a + b;
    printf("Somados: %d\n", soma);
}
