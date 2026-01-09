#include <stdio.h>

int main() {
    char str[200], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == ch)
            count++;

    printf("'%c' occurs %d times", ch, count);
    return 0;
}
