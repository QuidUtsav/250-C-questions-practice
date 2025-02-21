#include <stdio.h>

/*
   Question: Write a C program to find the factorial of a number using recursion.
   The program should calculate the factorial of an input number.
*/

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %lld\n", num, factorial(num));

    return 0;
}

