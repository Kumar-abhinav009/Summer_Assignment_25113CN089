//Write a program to Write function for Fibonacci.
#include <stdio.h>

int fibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    return 0;
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    fibonacci(n);
    printf("\n");

    return 0;
}