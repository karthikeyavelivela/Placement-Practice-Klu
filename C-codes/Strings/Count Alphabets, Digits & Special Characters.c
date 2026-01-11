#include <stdio.h>

int main() {
    char str[200];
    int letters = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
            letters++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if(str[i] != ' ' && str[i] != '\n')
            special++;
    }

    printf("Letters = %d\nDigits = %d\nSpecial Characters = %d",
           letters, digits, special);

    return 0;
}
