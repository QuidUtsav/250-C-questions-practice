#include <stdio.h>

/*
   Question: Write a C program to calculate the sum of an array using pointers.
*/

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of array elements: %d\n", sumArray(arr, size));
    return 0;
}

