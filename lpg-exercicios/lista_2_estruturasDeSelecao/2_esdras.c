#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero: \n");
    scanf("%i", &n);

    if (n % 2==0) {
        printf("Par");
    }else{
        printf("Impar");
    }
}
