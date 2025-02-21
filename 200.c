#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], diff[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }

    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Difference of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}

