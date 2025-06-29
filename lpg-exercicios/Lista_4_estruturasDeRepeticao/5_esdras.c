#include <stdio.h>

int main() {
    int numeros[10];
    int maior;
    
    printf("Digite 10 numeros inteiros distintos:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    
    printf("\nO maior numero informado foi: %d\n", maior);
    
    return 0;
}