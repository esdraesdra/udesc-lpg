#include <stdio.h>

int meu_strcmp(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) {
            return 0;
        }
        s1++;
        s2++;
    }
    return *s1 == *s2;
}

int main() {
    char str1[] = "paz";
    char str2[] = "paz";
    char str3[] = "caos";

    printf("%d\n", meu_strcmp(str1, str2));
    printf("%d\n", meu_strcmp(str1, str3));

    return 0;
}