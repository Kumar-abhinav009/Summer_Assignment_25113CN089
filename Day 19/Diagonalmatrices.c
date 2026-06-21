//Write a program to Find diagonal sum
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int primaryDiagonal = 0, secondaryDiagonal = 0;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding the sum of primary diagonal
    for (int i = 0; i < rows; i++) {
        primaryDiagonal += matrix[i][i];
    }

    // Finding the sum of secondary diagonal
    for (int i = 0; i < rows; i++) {
        secondaryDiagonal += matrix[i][cols - 1 - i];
    }

    // Displaying the sums
    printf("Sum of primary diagonal: %d\n", primaryDiagonal);
    printf("Sum of secondary diagonal: %d\n", secondaryDiagonal);

    return 0;
}