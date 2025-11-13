/* question5.c
   Fixed input example for scanf usage.
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number: ");
    /* scanf requires the address of n */
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    printf("You entered %d\n", n);
    return 0;
}

