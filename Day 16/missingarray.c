//Write a program to Find missing number in array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    int total = n * (n + 1) / 2;
    int missing = total - sum;
    
    printf("The missing number is: %d\n", missing);
    
    return 0;
}