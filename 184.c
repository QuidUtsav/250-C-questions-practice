#include <stdio.h>
#include <stdlib.h>

/*
   Question: Write a C program to calculate the median of an array.
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

float findMedian(int arr[], int size) {
    sortArray(arr, size);
    if (size % 2 == 0)
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    else
        return arr[size / 2];
}

int main() {
    int arr[] = {7, 3, 1, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Median of the array: %.2f\n", findMedian(arr, size));
    return 0;
}

