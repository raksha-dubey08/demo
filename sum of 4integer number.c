#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;

    printf("Sum of digits = %d\n", sum);
    return 0;
}
