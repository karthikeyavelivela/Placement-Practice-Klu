#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Duplicate elements:\n");
    int found = 0;

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] == a[j]) {
                printf("%d\n", a[i]);
                found = 1;
                break;
            }

    if(!found)
        printf("No duplicates found");

    return 0;
}
