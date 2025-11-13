/* question15.c
   PASS only if all five marks >= 40
*/
#include <stdio.h>

int main(void) {
    int m1, m2, m3, m4, m5;
    printf("Enter five subject marks (space separated): ");
    if (scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5) != 5) return 1;

    if ((m1 >= 40) && (m2 >= 40) && (m3 >= 40) && (m4 >= 40) && (m5 >= 40)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
    return 0;
}

