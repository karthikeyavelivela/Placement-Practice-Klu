#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 40)
    {
        if (marks >= 75)
            printf("Distinction");
        else
            printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
