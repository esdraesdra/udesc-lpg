#include <stdio.h>

int main() {
    int n, i, soma = 0, contador = 0;
    float media;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int vetor[n], acima[n];

    printf("Digite os inteiros dentro do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = (float)soma / n;

    for (i = 0; i < n; i++) {
        if (vetor[i] > media) {
            acima[contador] = vetor[i];
            contador++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Valores acima da media: %d\n", contador);

    if (contador > 0) {
        printf("Elementos: ");
        for (i = 0; i < contador; i++) {
            printf("%d ", acima[i]);
        }
        printf("\n");
    }

    return 0;
}
