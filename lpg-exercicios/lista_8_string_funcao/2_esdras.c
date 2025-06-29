#include <stdio.h>
#include <stdlib.h>

int meu_strlen(const char *x){
    int contador = 0;
    while (x[contador])
    {
        contador ++;
    }
    return contador;
}


char* meu_strcat(const char *x, const char *y){
    int tamanho_str_1 = meu_strlen(x);
    int tamanho_str_2 = meu_strlen(y);
    int tamanho_final = tamanho_str_1 + tamanho_str_2;
    char *strcat = (char *) malloc(tamanho_final);

    for (int i = 0; x[i]; i++)
    {
        strcat[i] = x [i];
    }

    for (int i = 0; y[i]; i++)
    {
        strcat[i+tamanho_str_1] = y[i];
    }
    
    strcat[tamanho_str_1 + tamanho_str_2] = 0;

    return strcat;
}

int main()
{
    char string_1[10];
    char string_2[10];
    char* resultado;
    scanf("%s %s",&string_1, &string_2);
    
    resultado = meu_strcat(string_1,string_2);
    printf("%s",resultado);
    return 0;
}
