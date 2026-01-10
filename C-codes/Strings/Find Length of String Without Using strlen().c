#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while(str[length] != '\0')
        length++;

    length--; // to ignore newline added by fgets

    printf("Length of string = %d", length);
    return 0;
}
