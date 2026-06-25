//Write a program to Check palindrome string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    // Reverse the string
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';

    // Check if the original string and reversed string are the same
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}