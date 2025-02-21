#include <stdio.h>
#include <string.h>

/*
   Question: Write a C program to sort an array of strings in alphabetical order.
   The program should take multiple words as input and arrange them in ascending order.
*/

void sortStrings(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char arr[n][50];
    printf("Enter strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    sortStrings(arr, n);
    printf("Sorted Strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

