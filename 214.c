#include <stdio.h>

int main() {
    int a, n, d, sum;
    printf("Enter first term, number of terms, and common difference: ");
    scanf("%d %d %d", &a, &n, &d);

    sum = (n * (2 * a + (n - 1) * d)) / 2;
    printf("Sum of A.P. series: %d\n", sum);
    return 0;
}

