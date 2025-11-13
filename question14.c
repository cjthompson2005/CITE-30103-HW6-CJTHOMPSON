/* question14.c
   Determine sign using conditional operator ?: 
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 1;

    const char *result = (n > 0) ? "positive" : (n < 0) ? "negative" : "zero";
    printf("The number is %s\n", result);

    return 0;
}

