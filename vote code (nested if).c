

#include <stdio.h>

int main() {
    int age;

    // Input age from user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility using nested if
    if (age >= 18) {
        printf("Eligible to vote\n");
    } else {
        if (age < 0) {
            printf("Invalid age\n");
        } else {
            printf("Not eligible to vote\n");
        }
    }

return 0;
}