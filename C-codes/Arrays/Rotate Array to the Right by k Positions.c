#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter rotation value: ");
    scanf("%d", &k);

    k = k % n;

    int temp[100];
    int index = 0;

    for(int i = n - k; i < n; i++)
        temp[index++] = a[i];

    for(int i = 0; i < n - k; i++)
        temp[index++] = a[i];

    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
