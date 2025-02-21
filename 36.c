#include <stdio.h>

int main() {
    int N, sum;
    scanf("%d", &N);

    sum = N * (N + 1) / 2;

    printf("Sum of numbers from 0 to %d is %d\n", N, sum);

    return 0;
}
