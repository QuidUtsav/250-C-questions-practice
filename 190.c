#include <stdio.h>

/*
   Question: Write a C program to replace all even elements with 0 and odd elements with 1.
*/

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        arr[i] = (arr[i] % 2 == 0) ? 0 : 1;
    }

    printf("Modified array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

