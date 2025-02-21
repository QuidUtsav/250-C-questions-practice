#include <stdio.h>

int main() {
    int *ip;
    char *cp;
    float *fp;
    double *dp;
    printf("Size of int pointer: %lu\n", sizeof(ip));
    printf("Size of char pointer: %lu\n", sizeof(cp));
    printf("Size of float pointer: %lu\n", sizeof(fp));
    printf("Size of double pointer: %lu\n", sizeof(dp));
    return 0;
}

