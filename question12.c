/* question12_fix.c
   Demonstrate two fixes to get res == 11 for a=5,b=3
*/
#include <stdio.h>

int main(void) {
    int a = 5, b = 3, res1, res2;
    res1 = a + (b << 1);  /* bitwise shift used intentionally: 3<<1 = 6 => 5+6 = 11 */
    res2 = a + b * 2;     /* arithmetic: 3*2 = 6 => 5+6 = 11 */
    printf("res1 (a + (b<<1)) = %d\n", res1);
    printf("res2 (a + b*2) = %d\n", res2);
    return 0;
}

