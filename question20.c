/* question20.c
   Use do-while to accept integers until user enters 0; print count excluding 0
*/
#include <stdio.h>

int main(void) {
    int count = 0;
    int x;
    do {
        printf("Enter integer (0 to stop): ");
        if (scanf("%d", &x) != 1) return 1;
        if (x != 0) count++;
    } while (x != 0);
    printf("You entered %d numbers (excluding 0)\n", count);
    return 0;
}

