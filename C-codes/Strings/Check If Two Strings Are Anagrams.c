#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    int freq[256] = {0};

    for(int i = 0; s1[i] != '\0'; i++)
        freq[(int)s1[i]]++;

    for(int i = 0; s2[i] != '\0'; i++)
        freq[(int)s2[i]]--;

    int flag = 1;
    for(int i = 0; i < 256; i++)
        if(freq[i] != 0) {
            flag = 0;
            break;
        }

    if(flag)
        printf("Strings are Anagrams");
    else
        printf("Strings are NOT Anagrams");

    return 0;
}
