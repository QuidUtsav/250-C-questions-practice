#include <stdio.h>

/*
   Question: Write a C program to find the smallest and largest elements from a given array.
*/

int main() {
    int arr[] = {34, 12, 98, 56, 7, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0], max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}

