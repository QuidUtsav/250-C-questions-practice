#include <stdio.h>
#include <math.h>

int main() {
    double a, r, n, sum;
    printf("Enter first term, common ratio, and number of terms: ");
    scanf("%lf %lf %lf", &a, &r, &n);

    if (r == 1)
        sum = a * n;
    else
        sum = a * (1 - pow(r, n)) / (1 - r);

    printf("Sum of G.P. series: %.6lf\n", sum);
    return 0;
}

