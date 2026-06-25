//Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, freq1[256] = {0}, freq2[256] = {0};

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Count frequency of each character in both strings
    for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        freq2[str2[i]]++;
    }

    // Compare frequencies
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}