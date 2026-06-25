//Write a program to Sort words by length
#include <stdio.h>
#include <string.h>

int main() {
    char words[10][100];
    int n, i, j;
    char temp[100];

    printf("Enter the number of words: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character

    printf("Enter the words:\n");
    for (i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0'; // Remove newline character
    }

    // Bubble sort by length
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words in order of increasing length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}