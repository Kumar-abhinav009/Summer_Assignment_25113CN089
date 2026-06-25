//Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        int found = 0;
        for (int k = 0; k < j; k++) {
            if (result[k] == str[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}