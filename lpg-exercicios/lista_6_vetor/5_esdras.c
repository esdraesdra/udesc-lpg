#include <stdio.h>

int main() {
    int A[5], B[5], C[5], i;

    printf("Digite 5 numeros para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 numeros para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    printf("Vetor C (somas):");
    for (i = 0; i < 5; i++) {
        printf(" %d", C[i]);
    }
    printf("\n");

    return 0;
}

