#include <stdio.h>
#include <math.h>

int main() {
    int rows, cols;
    double sum = 0.0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j] * matrix[i][j]; // Sum of squares
        }

    double normal = sqrt(sum);
    printf("Normal of the matrix: %.2lf\n", normal);

    return 0;
}

