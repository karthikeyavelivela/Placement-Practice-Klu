#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i, flag = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}
