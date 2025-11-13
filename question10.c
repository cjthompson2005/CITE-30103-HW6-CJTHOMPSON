/* question10.c
   Declare variables and display their sizes (size of variable, not type name).
*/
#include <stdio.h>

int main(void) {
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of variable 'c' (char) = %zu bytes\n", sizeof(c));
    printf("Size of variable 'i' (int) = %zu bytes\n", sizeof(i));
    printf("Size of variable 'li' (long int) = %zu bytes\n", sizeof(li));
    printf("Size of variable 'f' (float) = %zu bytes\n", sizeof(f));
    printf("Size of variable 'd' (double) = %zu bytes\n", sizeof(d));
    return 0;
}

