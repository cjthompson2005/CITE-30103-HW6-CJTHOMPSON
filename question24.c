/* question24.c
   Print numbers 1-50 skipping multiples of 5, stop when 40 reached.
*/
#include <stdio.h>

int main(void) {
    int count_displayed = 0;
    for (int i = 1; i <= 50; ++i) {
        if (i == 40) break;
        if (i % 5 == 0) continue;
        printf("%d\n", i);
        count_displayed++;
    }
    printf("Numbers displayed: %d\n", count_displayed);
    return 0;
}

