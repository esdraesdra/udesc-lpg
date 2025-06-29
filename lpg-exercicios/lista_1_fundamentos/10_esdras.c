#include <stdio.h>

int main(int argc, char const *argv[])
{
    float investido, final;

    printf("Digite o valor investido: \n");
    scanf("%f",&investido);

    final = investido + (investido*0.05*3);

    printf("Valor final: %f\n", final);
    
}
