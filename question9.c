/* question9.c
   Integer and floating-point division with implicit and explicit casting.
*/
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    int int_div = a / b; /* integer division */
    double float_div_implicit = (double)a / b; /* implicit cast by converting left operand */
    double float_div_explicit = ((double)a) / ((double)b); /* explicit casting both */

    printf("Integer division a/b = %d\n", int_div);
    printf("Floating point division (implicit) = %.6f\n", float_div_implicit);
    printf("Floating point division (explicit) = %.6f\n", float_div_explicit);
    return 0;
}

