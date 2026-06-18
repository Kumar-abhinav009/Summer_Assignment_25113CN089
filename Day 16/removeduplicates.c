//Write a program to Remove duplicates from array.
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

    int unique_arr[n];
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique_arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            unique_arr[unique_count] = arr[i];
            unique_count++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique_arr[i]);
    }
    printf("\n");

    return 0;
}