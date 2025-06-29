#include <stdio.h>
#include <math.h>

int main(){
    int quadrado=0;
    int i=0;
    for (i=15; i <201; i++) {
        quadrado = pow(i, 2);
        printf("quadrado de %d = %d \n",i,quadrado);
    }

    return 0;
}