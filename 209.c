#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += (double)(i * (i + 1)) / (i + 2);

    printf("Sum of the series: %.6lf\n", sum);
    return 0;
}

