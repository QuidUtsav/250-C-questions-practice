#include <stdio.h>
#include <string.h>

/*
   Question: Write a C program to print all possible subsets of a given length in a string.
   The program should generate all subsets of a given length from the input string.
*/

void printSubsets(char str[], int n, int len, char subset[], int index) {
    if (index == len) {
        subset[len] = '\0';
        printf("%s\n", subset);
        return;
    }
    for (int i = n; str[i] != '\0'; i++) {
        subset[index] = str[i];
        printSubsets(str, i + 1, len, subset, index + 1);
    }
}

int main() {
    char str[100], subset[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the subset length: ");
    scanf("%d", &len);

    printf("All subsets of length %d:\n", len);
    printSubsets(str, 0, len, subset, 0);

    return 0;
}

