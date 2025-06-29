#include <stdio.h>

int main() {
    int vetor[20], numero, i, contador = 0;

    printf("Digite 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a ser contado: ");
    scanf("%d", &numero);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == numero) contador++;
    }

    printf("O numero %d aparece %d vezes no vetor.\n", numero, contador);

    return 0;
}
