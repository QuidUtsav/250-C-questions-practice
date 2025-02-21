#include <stdio.h>

int main() {
    int n, sumMain = 0, sumOpposite = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        sumMain += matrix[i][i];               // Main diagonal
        sumOpposite += matrix[i][n - i - 1];   // Opposite diagonal
    }

    // If the matrix has an odd dimension, subtract the center element (counted twice)
    if (n % 2 == 1)
        sumOpposite -= matrix[n / 2][n / 2];

    printf("Sum of main diagonal: %d\n", sumMain);
    printf("Sum of opposite diagonal: %d\n", sumOpposite);
    printf("Total sum of both diagonals: %d\n", sumMain + sumOpposite);

    return 0;
}

