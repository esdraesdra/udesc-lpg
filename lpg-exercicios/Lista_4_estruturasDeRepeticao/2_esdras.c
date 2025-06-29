#include <stdio.h>

int main(){
    int resultado,p,im;
    int myNumbers[9];

    printf("Escreva 10 numeros\n");
    for (int i=0; i<=9; i++) {
        scanf("%i", &myNumbers[i]);
    }

    for (int i=0; i<=9; i++) {
        if (myNumbers[i] % 2 ==0){
            p ++;
        }else{
            im++;
        }
    }
    printf("pares: %d\nimpares: %d",p,im);
    return 0;
}