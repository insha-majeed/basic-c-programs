// Find the sum of all diagonal elements of a matrix

#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++) {
        sum += matrix[i][i];
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}