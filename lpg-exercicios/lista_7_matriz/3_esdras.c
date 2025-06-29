#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4],soma1,soma2,menor,maior;

    for(int i=0; i<4; i++){
        for(int j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
            
            if (i % 2==0)
                soma1+= matriz[i][j];
            if (i==1)
                soma2+= matriz[i][j];

        }
    }



    printf("Soma das linhas pares: %d\n", soma1);
    printf("Primeiro Elemento: %d, Ultimo Elemento: %d\n", matriz[0][0], matriz[3][3]);
    printf("Soma da linha 2: %d\n", soma2);
    printf("Elementos da Diagonal principal: ");
    for(int i=0;i<4;i++){
        printf("%d",matriz[i][i]);
    }
    printf("\n");

    menor = matriz[0][0];
    maior = matriz[0][0];

    for(int i= 0; i< 4;i++){
        for(int j= 0; j< 4;j++){
            if (menor > matriz[i][j]){
                menor = matriz[i][j];
            }
            if (maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
    }

    printf("Elemento maior: %d\n", maior);
    printf("Elemento menor: %d\n", menor);

    return 0;
}
