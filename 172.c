#include <stdio.h>

/*
   Question: Write a C program to pass a one-dimensional array to a function.
   The function should print all elements of the array.
*/

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);  // Passing array to function
    return 0;
}

