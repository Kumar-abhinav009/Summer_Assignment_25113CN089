//Write a program to Count words in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int i, wordCount = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ') {
            wordCount++;
        }
    }

    // Add 1 for the last word
    wordCount++;

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}