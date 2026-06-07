//Write a program to Recursive reverse number
#include <stdio.h>

int reverseNumber(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) * (int)(pow(10, (int)log10(n))) + reverseNumber(n / 10);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d\n", n, reverseNumber(n));
    return 0;
}