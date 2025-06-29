#include <stdio.h>

int main() {
    int n, i;
    float max, min;

    printf("Qual o tamanho do vetor?  ");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite os inteiros dentro do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    max = vetor[0];
    min = vetor[0];

    for (i = 1; i < n; i++) {
        if (vetor[i] > max) max = vetor[i];
        if (vetor[i] < min) min = vetor[i];
    }

    printf("Maior valor: %.2f\nMenor valor: %.2f\n", max, min);

    return 0;
}
