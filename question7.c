/* question7.c
   Area and circumference of a circle using both #define and const for PI.
*/
#include <stdio.h>
#define PI_DEFINE 3.14159265358979323846

int main(void) {
    const double PI_CONST = 3.14159265358979323846;
    double radius;
    printf("Enter radius: ");
    if (scanf("%lf", &radius) != 1) return 1;

    double area_define = PI_DEFINE * radius * radius;
    double circ_define = 2.0 * PI_DEFINE * radius;

    double area_const = PI_CONST * radius * radius;
    double circ_const = 2.0 * PI_CONST * radius;

    printf("Using #define: Area = %.2f, Circumference = %.2f\n", area_define, circ_define);
    printf("Using const  : Area = %.2f, Circumference = %.2f\n", area_const, circ_const);
    return 0;
   }
