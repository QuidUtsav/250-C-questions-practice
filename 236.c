#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int **dptr = &ptr;
    printf("Value of num: %d\n", **dptr);
    return 0;
}

