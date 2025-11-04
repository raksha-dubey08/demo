#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int sapID;
    float marks;
};

// Function to copy student data into the array
void copyStudent(struct Student *dest, struct Student src) {
    strcpy(dest->name, src.name);
    dest->sapID = src.sapID;
    dest->marks = src.marks;
}

// Function to display student details
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("SAP ID: %d\n", s.sapID);
    printf("Marks: %.2f\n", s.marks);
    printf("----------------------\n");
}

int main() {
    struct Student students[5];
    struct Student temp;

    printf("Enter details for 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter name: ");
        fgets(temp.name, sizeof(temp.name), stdin);
        temp.name[strcspn(temp.name, "\n")] = '\0'; // Remove newline

        printf("Enter SAP ID: ");
        scanf("%d", &temp.sapID);

        printf("Enter marks: ");
        scanf("%f", &temp.marks);
        getchar(); // Consume newline left by scanf

        // Copy temp student to array
        copyStudent(&students[i], temp);
    }

    printf("\nDisplaying student details:\n");
    for (int i = 0; i < 5; i++) {
        displayStudent(students[i]);
    }

    return 0;
}
