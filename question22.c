/* question22.c
   Reverse digits of a positive integer using while loop
*/
#include <stdio.h>

int main(void) {
    unsigned int n;
    printf("Enter a positive integer: ");
    if (scanf("%u", &n) != 1) return 1;

    unsigned int original = n;
    unsigned int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("Input: %u\nReversed: %u\n", original, rev);
    return 0;
}

