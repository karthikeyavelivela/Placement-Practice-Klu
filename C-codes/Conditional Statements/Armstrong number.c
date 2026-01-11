/*
Program Name: Armstrong Number Check in C

Explanation:
An Armstrong number is a number that is equal to the sum of its digits,
each raised to the power of the total number of digits.

Steps:
1. Read an integer from the user.
2. Count the number of digits in the given number.
3. Extract each digit and raise it to the power of the number of digits.
4. Add all the powered digits.
5. Compare the obtained sum with the original number.
6. If both are equal, the number is an Armstrong number; otherwise, it is not.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, count = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (num != 0) {
        count++;
        num /= 10;
    }

    num = original;

    // Calculate sum of digits raised to power count
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, count);
        num /= 10;
    }

    // Check Armstrong condition
    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
