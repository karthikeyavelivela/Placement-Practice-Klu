#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int count = 0, inWord = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(!isspace(str[i]) && inWord == 0) {
            inWord = 1;
            count++;
        }
        else if(isspace(str[i]))
            inWord = 0;
    }

    printf("Total Words = %d", count);
    return 0;
}
