#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c to avoid newline issue
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform operation using switch
    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}