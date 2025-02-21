#include <stdio.h>

/*
   Question: Write a C program to find the first repeated element in an array.
*/

int findFirstRepeated(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 5, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int repeated = findFirstRepeated(arr, size);
    if (repeated != -1)
        printf("First repeated element: %d\n", repeated);
    else
        printf("No repeated elements found.\n");

    return 0;
}

