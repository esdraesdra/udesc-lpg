#include <stdio.h>

int verifica_primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    printf("%d\n", verifica_primo(2));
    printf("%d\n", verifica_primo(7));
    printf("%d\n", verifica_primo(10));
    printf("%d\n", verifica_primo(1));
    return 0;
}