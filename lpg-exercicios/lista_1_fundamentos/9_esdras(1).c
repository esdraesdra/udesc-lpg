#include <stdio.h>

int main(int argc, char const *argv[])
{
    float compra,venda;

    printf("Digite o valor de sua compra!\n");
    scanf("%f", &compra);

    venda = compra + (compra*0.2) + (compra*0.3);

    printf("O valor de venda e: %f", venda);
}
