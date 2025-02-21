#include <stdio.h>

/*
   Question: Write a C program to calculate the product of two numbers using recursion.
   The program should take two integers as input and return their product without using multiplication operator `*`.
*/

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    if (b > 0)
        return a + multiply(a, b - 1);
    if (b < 0)
        return -multiply(a, -b);

    return 0;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Product of %d and %d is %d\n", num1, num2, multiply(num1, num2));

    return 0;
}

