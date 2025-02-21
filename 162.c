#include <stdio.h>

/*
   Question: Write a C program to count the number of digits in a given number using recursion.
   The program should return the count of digits in the input number.
*/

int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Total digits: 1\n");
    else
        printf("Total digits: %d\n", countDigits(num));

    return 0;
}

