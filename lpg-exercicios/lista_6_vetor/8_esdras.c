#include <stdio.h>

int main() {
    int vetor[10], numero, i, contador = 0, posicoes[10];

    printf("Digite os 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a ser buscado: ");
    scanf("%d", &numero);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == numero) {
            posicoes[contador] = i;
            contador++;
        }
    }

    if (contador == 0) {
        printf("O numero %d nao esta presente no vetor.\n", numero);
    } else {
        printf("O numero %d esta presente nas posicoes: ", numero);
        for (i = 0; i < contador; i++) {
            printf("%d ", posicoes[i]);
        }
        printf("\n");
    }

    return 0;
}
