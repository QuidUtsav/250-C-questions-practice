#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    double sum = 1.0;
    printf("Enter x and number of terms: ");
    scanf("%lf %d", &x, &n);

    for (int i = 1; i <= n; i++)
        sum += 1 / pow(x, i);

    printf("Sum of the series: %.6lf\n", sum);
    return 0;
}

