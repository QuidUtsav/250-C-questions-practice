#include <stdio.h>

/*
   Question: Write a C program to swap elements of two integer arrays using a user-defined function.
*/

void swapArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("Before swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    swapArrays(arr1, arr2, size);

    printf("\nAfter swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    return 0;
}

