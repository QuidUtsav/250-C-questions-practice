#include <stdio.h>

/*
   Question: Write a C program to sort an array in ascending order.
*/

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

