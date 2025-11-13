/* question4.c
   Debug the provided code and print correct average of two integers.
*/
#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    /* cast to float before division to avoid integer division */
    float avg = (a + b) / 2.0f;
    printf("Average = %.2f\n", avg);
    return 0;
}

