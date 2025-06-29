#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int meu_strlen(const char *x){
    int contador = 0;
    while (x[contador])
    {
        contador ++;
    }
    return contador;
}

char *meu_strcpy(char *dest, const char *src) {
    char *start = dest; 

    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';

    return start;
}

int main()
{
    char string_1[10];
    char string_2[10];
    char resultado;

    scanf("%s",&string_1);
    
    meu_strcpy(string_2, string_1);
    printf("%s",string_2);
    return 0;
}
