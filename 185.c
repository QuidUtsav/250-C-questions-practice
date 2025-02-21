#include <stdio.h>

/*
   Question: Write a C program to delete prime numbers from an array.
*/

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

void removePrimes(int arr[], int *size) {
    int j = 0;
    for (int i = 0; i < *size; i++) {
        if (!isPrime(arr[i])) {
            arr[j++] = arr[i];
        }
    }
    *size = j;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {3, 8, 13, 18, 21, 29};
    int size = sizeof(arr) / sizeof(arr[0]);

    removePrimes(arr, &size);
    printf("Array after removing prime numbers: ");
    printArray(arr, size);

    return 0;
}

