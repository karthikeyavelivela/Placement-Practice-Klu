#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i, j = 0;
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] != ' ')
            str[j++] = str[i];

    str[j] = '\0';

    printf("String without spaces: %s", str);
    return 0;
}
