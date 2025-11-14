/* question23.c
   Read integers until 0; count positives, negatives, evens, odds (excluding 0)
*/
#include <stdio.h>

int main(void) {
    int positives = 0, negatives = 0, evens = 0, odds = 0;
    int x;
    do {
        printf("Enter integer (0 to stop): ");
        if (scanf("%d", &x) != 1) return 1;
        if (x == 0) break;
        if (x > 0) positives++; else negatives++;
        if ((x % 2) == 0) evens++; else odds++;
    } while (1);

    printf("Positives: %d\nNegatives: %d\nEvens: %d\nOdds: %d\n", positives, negatives, evens, odds);
    return 0;
}

