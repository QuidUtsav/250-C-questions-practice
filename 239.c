#include <stdio.h>

int main() {
    int num = 50;
    int *ptr = &num;
    printf("Before: %p\n", ptr);
    ptr = NULL;
    printf("After: %p\n", ptr);
    return 0;
}

