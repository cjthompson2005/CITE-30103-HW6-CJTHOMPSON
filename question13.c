/* question13.c
   Check if number divisible by 2 and 3 but not 7 (use logical operators only)
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 1;

    if ((n % 2 == 0) && (n % 3 == 0) && !(n % 7 == 0)) {
        printf("%d is divisible by 2 and 3 but not 7\n", n);
    } else {
        printf("%d does not satisfy the condition\n", n);
    }
    return 0;
}

