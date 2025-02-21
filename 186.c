#include <stdio.h>

/*
   Question: Write a C program to find the second largest element in an array.
*/

int findSecondLargest(int arr[], int size) {
    int first = arr[0], second = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 5, 20, 8, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    printf("Second largest element: %d\n", secondLargest);
    return 0;
}

