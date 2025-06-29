#include <stdio.h>

int meu_strlen(const char *x){
    int contador = 0;
    while (x[contador])
    {
        contador ++;
    }
    return contador;
}


int main()
{
    char string[10];
    scanf("%s",&string);
    int tamanho = meu_strlen(string);
    printf("tamanho: %d",tamanho);

    return 0;
}
