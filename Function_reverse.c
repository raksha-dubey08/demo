#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char str[]) {
    int len = strlen(str);
    int i, j;
    char temp;

    // Two-pointer method: swap from start and end
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);    // (for beginners; safer alternative is fgets)

    // Calling reverse function
    reverse(str);

    return 0;
}
