#include <stdio.h>

/*
   Question: Write a C program to pass an integer array to a function and return the sum of all elements.
*/

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of array elements: %d\n", sumArray(arr, size));
    return 0;
}

