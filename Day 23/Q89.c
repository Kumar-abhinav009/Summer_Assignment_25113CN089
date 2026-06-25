//Write a program to Find first non-repeating character
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

    // Find first non-repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}