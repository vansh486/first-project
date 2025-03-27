#include <stdio.h>

#define SIZE 10 // Maximum matrix size

int main() {
    int matrix[SIZE][SIZE], rows, cols, i, j;

    // Input matrix size
    printf("Enter number of rows and columns (square matrix): ");
    scanf("%d %d", &rows, &cols);

    // Check if it's a square matrix
    if (rows != cols) {
        printf("Error: Matrix must be square!\n");
        return 1;
    }

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Convert to Lower Triangular Matrix
    printf("Lower Triangular Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (j > i) 
                printf("0 "); // Replace upper diagonal elements with 0
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
