#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int total = 0, leftSum = 0;
    for(int i = 0; i < n; i++)
        total += a[i];

    int found = 0;
    for(int i = 0; i < n; i++) {
        total -= a[i];
        if(leftSum == total) {
            printf("Equilibrium Index = %d", i);
            found = 1;
            break;
        }
        leftSum += a[i];
    }

    if(!found)
        printf("No Equilibrium Index");

    return 0;
}
