#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int sapID;
    float marks;
};

int main() {
    struct Student students[5];  // Array of 5 students
    int i;

    // Input details of students
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter SAP ID: ");
        scanf("%d", &students[i].sapID);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display details
    printf("\n----- Student Details -----\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sapID);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
