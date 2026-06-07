//Write a program to Find largest prime factor.// Write a program to find the largest prime factor

#include <stdio.h>

int main() {
    long long n;
    long long largestFactor = -1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n % 2 == 0) {
        largestFactor = 2;
        n = n / 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n = n / i;
        }
    }

    if (n > 2) {
        largestFactor = n;
    }

    printf("Largest Prime Factor = %lld\n", largestFactor);

    return 0;
}