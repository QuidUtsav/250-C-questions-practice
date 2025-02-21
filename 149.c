#include <stdio.h>
#include <string.h>

int sumDigits(char str[]) {
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    char str[100];
    printf("Enter an alphanumeric string: ");
    scanf("%s", str);

    printf("Sum of digits: %d\n", sumDigits(str));

    return 0;
}

