#include <stdio.h>

int main() {
    int n, i;
    float soma = 0.0, media;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite os floats do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / n;
    printf("Media: %.2f\n", media);

    return 0;
}
