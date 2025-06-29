#include <stdio.h>

int main() {
    int numero, incremento;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Digite o incremento inteiro: ");
    scanf("%d", &incremento);

    for (int i = 0; i <= numero; i += incremento) {
        printf("%d", i);
        
        if (i + incremento <= numero) {
            printf(", ");
        }
    }
    
    return 0;
}