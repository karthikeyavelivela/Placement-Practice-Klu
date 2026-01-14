#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements (only 0,1,2):\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int low = 0, mid = 0, high = n - 1;

    while(mid <= high) {
        if(a[mid] == 0) {
            int t = a[low];
            a[low] = a[mid];
            a[mid] = t;
            low++; mid++;
        }
        else if(a[mid] == 1)
            mid++;
        else {
            int t = a[mid];
            a[mid] = a[high];
            a[high] = t;
            high--;
        }
    }

    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
