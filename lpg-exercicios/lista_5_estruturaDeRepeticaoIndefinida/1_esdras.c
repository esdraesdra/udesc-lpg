#include <stdio.h>

int main() {
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y) {
        while (x < y) {
            printf("%d ", x);
            x++;
        }
    } else if (x > y) {
        while (x > y) {
            printf("%d ", x);
            y--;
        }
    }

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}
