#include <stdio.h>

int main() {
    int vetor[20], i, pares = 0;

    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) pares++;
    }

    printf("Quantidade de numeros pares: %d\n", pares);

    return 0;
}
