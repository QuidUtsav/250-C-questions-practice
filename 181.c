#include <stdio.h>

/*
   Question: Write a C program to count the total number of elements in a one-dimensional array using the `sizeof()` operator.
*/

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Total number of elements in the array: %d\n", size);
    return 0;
}

