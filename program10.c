#include <stdio.h>
int main() {
    int x = 5;
    printf("Initial value of x = %d\n", x);

    printf("Post-increment x++ = %d\n", x++);
    printf("After post-increment, x = %d\n", x);

    printf("Pre-increment ++x = %d\n", ++x);
    printf("After pre-increment, x = %d\n", x);

    return 0;
}
