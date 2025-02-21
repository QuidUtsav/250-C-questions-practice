#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;
    char ch = 'A';

    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", pi);
    printf("Character: %c\n", ch);
    printf("String: %s\n", "Hello, World!");
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Address: %p\n", (void*)&num);

    return 0;
}
