```c
#include <stdio.h>

int main() {
    int vetor[10], i;

    printf("Digite 10 inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        printf(" %d", vetor[i]);
    }
    printf("\n");

    for (i = 9; i >= 0; i--) {
        printf(" %d", vetor[i]);
    }

    return 0;
}
```
