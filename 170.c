#include <stdio.h>

/*
   Question: Write a C program to demonstrate a user-defined function with no arguments and no return type.
   The function should simply print a message.
*/

void displayMessage() {
    printf("Hello! This is a user-defined function with no arguments and no return type.\n");
}

int main() {
    displayMessage();  // Function call
    return 0;
}

