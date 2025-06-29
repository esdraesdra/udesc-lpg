#include <stdio.h>

int verifica_par_impar(int n) {
    return n % 2 == 0;
}

int main() {
    printf("%d\n", verifica_par_impar(10));
    printf("%d\n", verifica_par_impar(7));
    printf("%d\n", verifica_par_impar(0));
    printf("%d\n", verifica_par_impar(-3));
    return 0;
}