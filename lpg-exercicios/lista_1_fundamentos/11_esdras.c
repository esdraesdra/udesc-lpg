#include <stdio.h>

int main(int argc, char const *argv[])
{
    float f, c;
    printf("Digite os graus em Fahrenheit: \n");
    scanf("%f", &f);

    c = (5*(f-32))/9;

    printf("%f F equivalem a %f C.", f,c);
}   
