#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int i = 0, j = strlen(str) - 1;
    int isPal = 1;

    while(i < j) {
        if(str[i] != str[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPal)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
