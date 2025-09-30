#include <stdio.h>

int main() {
    int num, i = 1;
    unsigned long long factorial = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial is not defined.\n");
    } else {
        
        while (i <= num) {
            factorial *= i;
            i++;
        }


        printf("Factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}
