#include <stdio.h>
int main() {
    char grade;
    scanf(" %c", &grade);
    switch(grade) {
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Pass"); break;
        case 'F': printf("Fail"); break;
        default: printf("Invalid grade");
    }
    return 0;
}
