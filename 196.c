#include <stdio.h>

/*
   Question: Write a C program to find the sum and product of all elements in a matrix.
*/

int main() {
    int rows, cols, sum = 0, product = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            product *= matrix[i][j];
        }

    printf("Sum of all elements: %d\n", sum);
    printf("Product of all elements: %d\n", product);

    return 0;
}

