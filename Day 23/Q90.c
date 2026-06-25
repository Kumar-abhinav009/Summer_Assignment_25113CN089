//Write a program to Find first repeating character
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, freq[256] = {0};

    printf("Enter a string: ");
    gets(str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Find first repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] > 1) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");

    return 0;
}