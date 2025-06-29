#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, ant, suc;

    scanf("%d", &a);
    ant = a - 1;
    suc = a + 1;

    printf("numero: %d\n", a);
    printf("antecessor: %d\n", ant);
    printf("sucessor: %d\n", suc);
    return 0;
}
