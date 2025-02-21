#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += 1.0 / i;

    printf("Sum of H.P. series: %.6lf\n", sum);
    return 0;
}

