/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main() {
int num1, num2;
int sum,diff,product;
float quotient;
scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / (float)num2;
    printf("Sum: %d\n", sum);
    printf("DI=ifference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    return 0;
}