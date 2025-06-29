#include <stdio.h>

int main() {
    int vetor[15], i, soma = 0;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 1; i < 15; i += 2) {
        soma += vetor[i];
    }

    printf("Soma dos elementos em posicoes impares: %d\n", soma);

    return 0;
}
