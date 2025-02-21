#include <stdio.h>

/*
   Question: Write a C program to calculate the sum and product of all elements in an array.
*/

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, product = 1;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    printf("Product of elements: %d\n", product);

    return 0;
}

