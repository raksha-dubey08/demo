#include <stdio.h>
#include <ctype.h>

int main(void) {
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int c;

    printf("Enter a string: ");
    
    while ((c = getchar()) != EOF && c != '\n') {
        unsigned char uc = (unsigned char)c;
        if (isalpha(uc)) {
            char lc = tolower(uc);
            if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u')
                ++vowels;
            else
                ++consonants;
        } else if (isdigit(uc)) {
            ++digits;
        } else {
            ++special; 
    }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
