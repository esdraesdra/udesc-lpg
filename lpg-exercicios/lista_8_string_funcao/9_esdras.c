#include <stdio.h>

int soma_matriz(int mat[][3], int linhas) {
    int total = 0;
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < 3; j++)
            total += mat[i][j];
    return total;
}

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Soma: %d\n", soma_matriz(matriz, 2));
    return 0;
}