#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Main diagonal elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", matrix[i][i]);

    printf("\nSecondary diagonal elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", matrix[i][n - i - 1]);

    return 0;
}

