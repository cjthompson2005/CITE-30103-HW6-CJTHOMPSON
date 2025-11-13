/* question11.c
   Input two integers and print basic arithmetic results.
*/
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and remainder: division by zero error\n");
    }
    return 0;
}

