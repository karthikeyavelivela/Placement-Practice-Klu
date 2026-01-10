#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d:\n", target);
    int found = 0;

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] + a[j] == target) {
                printf("(%d, %d)\n", a[i], a[j]);
                found = 1;
            }

    if(!found)
        printf("No pairs found");

    return 0;
}
