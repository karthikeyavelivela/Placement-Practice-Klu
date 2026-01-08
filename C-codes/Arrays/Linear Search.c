#include <stdio.h>

int main() {
    int n, key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not Found");

    return 0;
}
