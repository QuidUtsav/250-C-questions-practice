#include <stdio.h>

/*
   Question: Write a C program to find the GCD (Greatest Common Divisor) of given numbers using recursion.
   The program should read two integers and return their GCD.
*/

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

