//Write a program to Union of arrays.
#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int union_arr[size1 + size2];
    int i, j, k;

    // Copy elements from first array
    for (i = 0; i < size1; i++) {
        union_arr[i] = arr1[i];
    }

    // Add elements from second array if they are not already present
    for (j = 0; j < size2; j++) {
        int found = 0;
        for (i = 0; i < size1; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            union_arr[i] = arr2[j];
            i++;
        }
    }

    printf("Union array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");

    return 0;
}