#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    printf("Os %d menores primos maiores que %d são: ", n, k);

    int contador = 0;
    int numero = k + 1;

    while (contador < n) {
        if (eh_primo(numero)) {
            printf("%d", numero);
            contador++;

            if (contador < n) {
                printf(", ");
            }
        }
        numero++;
    }

    printf("\n");
    return 0;
}
