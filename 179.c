#include <stdio.h>

/*
   Question: Write a C program to pass a two-dimensional array to a function.
   The function should print all elements of the 2D array.
*/

void printMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printMatrix(matrix, 2, 3);
    return 0;
}

