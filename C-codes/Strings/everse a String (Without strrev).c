#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str) - 1;

    printf("Reversed String: ");
    for(int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
