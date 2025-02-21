#include <stdio.h>

/*
   Question: Write a C program to find the first capital letter in a string without using recursion.
   The program should scan a given string and return the first uppercase letter found.
*/

char firstCapital(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return str[i];
    }
    return '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstCapital(str);
    if (result)
        printf("First capital letter: %c\n", result);
    else
        printf("No capital letter found.\n");

    return 0;
}

