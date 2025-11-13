/* question17.c
   Grading system using if-else
*/
#include <stdio.h>

int main(void) {
    int marks;
    printf("Enter marks (0-100): ");
    if (scanf("%d", &marks) != 1) return 1;

    if (marks >= 90) {
        printf("A\n");
    } else if (marks >= 80) {
        printf("B\n");
    } else if (marks >= 70) {
        printf("C\n");
    } else if (marks >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    return 0;
}

