#include <stdio.h>

/*
   Question: Write a C program to find the HCF (Highest Common Factor) of given numbers using recursion.
   The program should read two integers and return their HCF.
*/

int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));

    return 0;
}

