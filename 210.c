#include <stdio.h>
#include <math.h>

double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() {
    double x;
    int n;
    double sum = 0.0;
    printf("Enter x and number of terms: ");
    scanf("%lf %d", &x, &n);

    for (int i = 0; i < n; i += 2)
        sum += x / factorial(i);

    printf("Sum of the series: %.6lf\n", sum);
    return 0;
}

