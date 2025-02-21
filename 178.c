#include <stdio.h>

/*
   Question: Write a C program to pass a function as an argument to another function.
   The program should define two functions, and one should be passed as an argument.
*/

void greet() {
    printf("Hello, welcome to C programming!\n");
}

void executeFunction(void (*func)()) {
    func();  // Call the passed function
}

int main() {
    executeFunction(greet);
    return 0;
}

