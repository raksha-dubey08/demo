#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
    char choice;

    do {
       
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

       
        printf("Enter operation (+, -, *, /): ");
        scanf(" %c", &op);  

        
        switch (op) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation.\n");
        }

        
        printf("\nDo you want to continue? (1 for Yes / 0 for No): ");
        scanf(" %d", &choice);

    } while (choice != 0);

    printf("Calculator exited.\n");
    return 0;
}
