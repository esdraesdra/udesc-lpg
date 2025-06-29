#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a,b, soma, sub, mult, expo, resto; 
    float divi;
    printf("De dois numeros inteiros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    divi = a / b; 
    expo = pow(a,b);
    resto = a % b;
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicao: %d\n", mult);
    printf("Divisao: %f\n", divi);
    printf("expo: %d\n", expo);
    printf("Resto: %d\n", resto);
}
