// Find product of two matrices

#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrices with entered orders can't be multiplied with each other.\n");
        return 0;
    }
    int matrix1[m][n], matrix2[p][q], product[m][q];
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            product[i][j] = 0;
            for (k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The product of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
