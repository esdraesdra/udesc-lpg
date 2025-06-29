#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0;

    printf("Digite um numero: \n");
    scanf("%i", &n);

    if (n > (-1)) {
        printf("Positivo");
    } else {
        printf("Negativo");
    }
}
