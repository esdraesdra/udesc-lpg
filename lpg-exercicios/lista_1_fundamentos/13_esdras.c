#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, temp;

    printf("Digite o valor de A: \n");
    scanf("%d", &a);

    printf("Digite o valor de B: \n");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("A: %d, B: %d", a,b);
}
