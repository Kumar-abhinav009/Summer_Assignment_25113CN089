//Write a program to Write function to find factorial
#include <stdio.h>

int findFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * findFactorial(n - 1);
    }
}

int main() {
    int num, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial = findFactorial(num);
    printf("Factorial of %d is %d", num, factorial);
    return 0;
}