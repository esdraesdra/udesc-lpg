#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x,y,z;

    printf("Informe tres numeros: \n");
    scanf("%i", &x);  
    scanf("%i", &y);  
    scanf("%i", &z);  


    if ((x>y) & (x>z)){
         printf("%i e maior, primeiro", x);
    }else if ((y>x) & (y>z)) {
            printf("%i e maior, segundo", y);
        }else{
            printf("%i e maior, terceiro", z);
        }

    
}
