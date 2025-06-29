#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[3][3],linha;

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Qual linha deseja ver (1-3)\n");
    scanf("%d", &linha);

    switch (linha)
    {
    case 1:
        printf("%d %d %d", matriz[0][0], matriz[0][1], matriz[0][2]);
        break;
    
    case 2:
        printf("%d %d %d", matriz[1][0], matriz[1][1], matriz[1][2]);
        break;

    case 3:
        printf("%d %d %d", matriz[2][0], matriz[2][1], matriz[2][2]);
        break;
    default:
        break;
    }

    return 0;
}
