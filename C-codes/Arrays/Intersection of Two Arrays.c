#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int a[n1], b[n2];

    printf("Enter first array:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection: ");
    int found = 0;

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                b[j] = -99999; 
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("No Common Elements");

    return 0;
}
