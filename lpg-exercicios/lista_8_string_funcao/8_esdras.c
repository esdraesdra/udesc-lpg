#include <stdio.h>

int verifica_vetores_iguais(int *v1, int *v2, int tamanho) {
    for(int i = 0; i < tamanho; i++)
        if(v1[i] != v2[i]) return 0;
    return 1;
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {1, 2, 3};
    int c[] = {1, 2, 4};
    
    printf("%d\n", verifica_vetores_iguais(a, b, 3));
    printf("%d\n", verifica_vetores_iguais(a, c, 3));
    return 0;
}