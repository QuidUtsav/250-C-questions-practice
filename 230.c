#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str;
    while (*ptr) {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}

