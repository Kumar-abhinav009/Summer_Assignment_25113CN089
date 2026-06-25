//Write a program to Check string rotation
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcat(str1, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(str1, str2) != NULL) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are not rotations of each other.\n");
    }

    return 0;
}