#include <stdio.h>

/*
   Question: Write a C program to pass a string to a function.
   The function should print the given string.
*/

void printString(char str[]) {
    printf("String: %s\n", str);
}

int main() {
    char str[] = "Hello, world!";
    printString(str);
    return 0;
}

