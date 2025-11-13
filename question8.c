/* question8.c
   Demonstrate global and local scope
*/
#include <stdio.h>

int global_count = 150; /* global variable */

int main(void) {
    int local_count = 5; /* local variable */
    printf("Global count (accessible everywhere in this file): %d\n", global_count);
    printf("Local count (accessible only inside main): %d\n", local_count);
    return 0;
}

