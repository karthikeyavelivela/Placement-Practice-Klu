#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("After removing consecutive duplicates: ");

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != str[i+1])
            printf("%c", str[i]);
    }

    return 0;
}
