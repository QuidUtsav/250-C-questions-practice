#include <stdio.h>
#include <string.h>

void swapAdjacent(char str[]) {
    int len = strlen(str);
    if (len % 2 != 0) {
        printf("String length must be even to swap adjacent characters.\n");
        return;
    }

    for (int i = 0; i < len; i += 2) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter an even-length string: ");
    scanf("%s", str);

    swapAdjacent(str);
    printf("Swapped String: %s\n", str);

    return 0;
}

