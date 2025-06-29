#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int raio, altura;
    float volume;

    printf("Raio do Latao?\n");
    scanf("%d", &raio);

    printf("Altura do Latao?\n");
    scanf("%d", &altura);

    volume = 3.14 * pow(raio,2) * altura;

    printf("Volume: %.2f", volume);
}
