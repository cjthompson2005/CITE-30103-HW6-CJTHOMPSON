/* question18.c
   Simple arithmetic calculator using switch
*/
#include <stdio.h>

int main(void) {
    double a, b;
    char op;
    printf("Enter expression (e.g., 5 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;

    switch (op) {
        case '+':
            printf("%.6g %c %.6g = %.6g\n", a, op, b, a + b);
            break;
        case '-':
            printf("%.6g %c %.6g = %.6g\n", a, op, b, a - b);
            break;
        case '*':
            printf("%.6g %c %.6g = %.6g\n", a, op, b, a * b);
            break;
        case '/':
            if (b == 0.0) {
                printf("Error: division by zero\n");
            } else {
                printf("%.6g %c %.6g = %.6g\n", a, op, b, a / b);
            }
            break;
        default:
            printf("Unsupported operator\n");
    }
    return 0;
}

