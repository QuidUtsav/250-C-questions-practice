#include <stdio.h>

/*
   Question: Write a C program to find the LCM (Lowest Common Multiple) of given numbers using recursion.
   The program should read two integers and return their LCM using recursion.
*/

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}

