#include <stdio.h>

/*
   Question: Write a C program to pass an array of strings to a function.
   The function should print all strings in the array.
*/

void printStrings(char str[][20], int size) {
    for (int i = 0; i < size; i++)
        printf("%s\n", str[i]);
}

int main() {
    char words[][20] = {"Apple", "Banana", "Cherry", "Date"};
    int size = sizeof(words) / sizeof(words[0]);

    printStrings(words, size);
    return 0;
}

