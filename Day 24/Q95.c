//Write a program to Find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest_word[100];
    int i, j = 0, max_len = 0, current_len = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                longest_word[j] = '\0';
                j = 0;
            }
            current_len = 0;
        }
    }

    if (current_len > max_len) {
        max_len = current_len;
        longest_word[j] = '\0';
    }

    printf("Longest word: %s\n", longest_word);
    printf("Length: %d\n", max_len);

    return 0;
}