#include <stdio.h>

/*
   Question: Write a C program to pass multiple types of arguments (integer, float, and string) to a function.
*/

void displayData(int num, float fnum, char str[]) {
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("String: %s\n", str);
}

int main() {
    int a = 10;
    float b = 5.5;
    char msg[] = "Hello";

    displayData(a, b, msg);
    return 0;
}

