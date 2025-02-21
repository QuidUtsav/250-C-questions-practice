#include <stdio.h>

char firstCapital(char str[], int index) {
    if (str[index] == '\0')
        return '\0';
    if (str[index] >= 'A' && str[index] <= 'Z')
        return str[index];

    return firstCapital(str, index + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstCapital(str, 0);
    if (result)
        printf("First capital letter: %c\n", result);
    else
        printf("No capital letter found.\n");

    return 0;
}

