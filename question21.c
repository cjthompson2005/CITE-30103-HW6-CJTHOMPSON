/* question21.c
   Print a left-aligned pyramid of stars (centered visually using spaces)
*/
#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1) return 1;

    for (int r = 1; r <= rows; ++r) {
        /* print r stars separated by space */
        for (int c = 0; c < r; ++c) {
            if (c) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

