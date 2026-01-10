#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            continue;
        str[j++] = ch;
    }

    str[j] = '\0';

    printf("String after removing vowels: %s", str);
    return 0;
}
