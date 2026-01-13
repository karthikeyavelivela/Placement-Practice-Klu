#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int maxSum = a[0], currentSum = a[0];

    for(int i = 1; i < n; i++) {
        currentSum = (currentSum + a[i] > a[i]) ? currentSum + a[i] : a[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum Subarray Sum = %d", maxSum);
    return 0;
}
