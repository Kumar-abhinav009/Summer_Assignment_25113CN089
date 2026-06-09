//Write a program to Print repeated character pattern.
#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    char ch = 'A'; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++; 
        printf("\n");
    }

    return 0;
}