# include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() 
{
    char str[MAX_SIZE];
    char reversed_str[MAX_SIZE];
    int length = 0;
    
    printf("Enter a string: ");
    scanf("%99s", str);
    length = strlen(str);
    for (int i = length - 1, int j = 0; i >= 0; i--, j++) 
    {
        reversed_str[j] = str[i];
    }
    reversed_str[length] = '\0';
    strcpy(str, reversed_str);
    printf("Reversed string: %s\n", str);
 return 0;
}
