#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Informe sua idade: \n");
    scanf("%i", &idade);  

    if (idade>17){
        if (idade>64){
            printf("Eleitor Facultativo.");
        }else{
            printf("Leitor Obrigatorio.");
        }
    }else{
        printf("Nao eleitor.");
    }
}
