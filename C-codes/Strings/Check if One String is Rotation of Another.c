#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if(strlen(s1) != strlen(s2)) {
        printf("Not Rotation");
        return 0;
    }

    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2))
        printf("Strings are Rotation of Each Other");
    else
        printf("Not Rotation");

    return 0;
}
