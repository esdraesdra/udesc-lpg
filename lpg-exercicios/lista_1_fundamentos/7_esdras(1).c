#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cambio, valor, resultado;
    printf("Infome o valor do cambio do dolar:\n");
    scanf("%f", &cambio);

    printf("Quanto em dolares deseja converter?\n");
    scanf("%f", &valor);

    resultado = valor*cambio;
    printf("Serao necessarios %f reais para comprar %f dolares!\n",resultado,valor);

}
