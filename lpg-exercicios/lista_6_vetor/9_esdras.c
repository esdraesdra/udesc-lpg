#include <stdio.h>

int main() {
    int A[5], B[5], C[10], i;

    printf("Digite os 5 elementos do vetor A:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 5 elementos do vetor B:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[2 * i] = A[i];
        C[2 * i + 1] = B[i];
    }

    printf("Vetor C intercalado:");
    for (i = 0; i < 10; i++) {
        printf(" %d", C[i]);
    }
    printf("\n");

    return 0;
}
