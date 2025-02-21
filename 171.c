#include <stdio.h>

/*
   Question: Write a C program to demonstrate a user-defined function with arguments but no return type.
   The function should take two integers as input and print their sum.
*/

void addNumbers(int a, int b) {
    printf("Sum of %d and %d is %d\n", a, b, a + b);
}

int main() {
    int num1 = 5, num2 = 10;
    addNumbers(num1, num2);  // Function call with arguments
    return 0;
}

