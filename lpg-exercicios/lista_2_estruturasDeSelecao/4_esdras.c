#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;

    printf("Informe dois numeros: \n");
    scanf("%i", &x);  
    scanf("%i", &y);  

    if (x==y){
        printf("Sao iguais.");
    } else {
        if (x>y){
            printf("%i e maior que %i", x,y);
        }
        if (y>x){
            printf("%i e maior que %i", y,x);
        }
    }
}
