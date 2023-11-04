#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10], row, col, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the transpose of the matrix
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }


    // Displaying the transpose matrix
    printf("Transpose of the Matrix:\n");
    for (i = 0; i < col; ++i) {
        for (j = 0; j < row; ++j) {
            printf("%d ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }
    }

    return 0;
}
