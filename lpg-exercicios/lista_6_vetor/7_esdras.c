#include <stdio.h>

int main() {
    int original[10], inverso[10], i;

    printf("Digite 10 elementos:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &original[i]);
    }

    for (i = 0; i < 10; i++) {
        inverso[i] = original[9 - i];
    }

    printf("Vetor original:");
    for (i = 0; i < 10; i++) {
        printf(" %d", original[i]);
    }
    printf("\n");

    printf("Vetor invertido:");
    for (i = 0; i < 10; i++) {
        printf(" %d", inverso[i]);
    }
    printf("\n");

    return 0;
}
