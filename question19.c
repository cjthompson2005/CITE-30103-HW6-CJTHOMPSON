/* question19.c
   Sum numbers from 1 to n using while loop
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter positive integer n: ");
    if (scanf("%d", &n) != 1) return 1;
    if (n < 1) {
        printf("n should be >= 1\n");
        return 1;
    }

    int i = 1;
    long sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum 1..%d = %ld\n", n, sum);
    return 0;
}

