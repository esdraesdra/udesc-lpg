#include <stdio.h>

int main(){
    int j = 0;
    for (int i=0; i<=100; i++) {
        j = i + j;
    }

    printf("%d",j);
    return 0;
}