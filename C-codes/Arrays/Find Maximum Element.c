#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    printf("Maximum = %d", max);
    return 0;
}
