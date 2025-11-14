/* question25.c
   Print multiplication tables from L to R, each table ×1..×10
*/
#include <stdio.h>

int main(void) {
    int L, R;
    printf("Enter L and R (L <= R): ");
    if (scanf("%d %d", &L, &R) != 2) return 1;
    if (L > R) {
        printf("Invalid range\n");
        return 1;
    }

    for (int t = L; t <= R; ++t) {
        printf("Table of %d\n", t);
        for (int i = 1; i <= 10; ++i) {
            printf("%d x %d = %d\n", t, i, t * i);
        }
        printf("\n");
    }
    return 0;
}

