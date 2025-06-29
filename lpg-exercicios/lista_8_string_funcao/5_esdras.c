#include <stdio.h>
#include <string.h>

int verifica_palindromo(char *s) {
    int i = 0;
    int j = strlen(s) - 1;
    while(i < j) {
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    printf("%d\n", verifica_palindromo("ovo"));
    printf("%d\n", verifica_palindromo("arara"));
    printf("%d\n", verifica_palindromo("casa"));
    return 0;
}