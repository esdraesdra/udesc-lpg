#include <stdio.h>

int main() {
    float X, Y, Z;

    printf("Digite os valores dos lados: ");
    scanf("%f %f %f", &X, &Y, &Z);

    if (X + Y > Z && X + Z > Y && Y + Z > X) {
        if (X == Y && Y == Z) {
            printf("Equilátero\n");
        } else if (X == Y || Y == Z || X == Z) {
            printf("Isósceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("ERRO\n");
    }
}
