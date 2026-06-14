//Write a program to check if a number is an Armstrong number.#include <stdio.h>
#include<stdio.h>
int isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    return sum == original;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}