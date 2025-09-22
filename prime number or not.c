#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime
    isPrime = (num <= 1) ? 0 : 1;

    // Check divisors
    for (i = 2; i * i <= num; i++) {
        isPrime = (num % i == 0) ? 0 : isPrime;
    }

    // Print using ternary operator
    printf("%d %s a prime number.\n", num, (isPrime ? "is" : "is not"));

    return 0;
}
