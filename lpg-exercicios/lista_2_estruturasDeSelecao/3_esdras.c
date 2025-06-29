#include <stdio.h>

int main(int argc, char const *argv[])
{
    float m,valor,t;

    printf("Quantas macas comprou? \n");
    scanf("%f", &m);    

    if (m<12) {
        valor=2.30;
    } else {
        valor=1.95;
    }

    t=valor*m;
    printf("Total: R$%f", t);
}
