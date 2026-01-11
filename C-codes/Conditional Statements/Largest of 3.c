#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c)
            printf("Largest: %d", a);
        else
            printf("Largest: %d", c);
    } else {
        if (b > c)
            printf("Largest: %d", b);
        else
            printf("Largest: %d", c);
    }

    return 0;
}
