#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    *ptr = 20;
    printf("Modified value: %d\n", num);
    return 0;
}

