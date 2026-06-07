//Write a program to Check strong number.

#include <stdio.h>

int main() {
    int n, i, sum = 0, fact, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        i = temp % 10;
        fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}