#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[2][3], soma=0;

    for(int i=0; i<2; i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("%d", soma);
    return 0;
}
