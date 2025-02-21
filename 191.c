#include <stdio.h>

/*
   Question: Write a C program to merge two one-dimensional arrays into a third array.
*/

void mergeArrays(int arr1[], int size1, int arr2[], int size2) {
    int merged[size1 + size2];

    for (int i = 0; i < size1; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};

    mergeArrays(arr1, 3, arr2, 4);
    return 0;
}

