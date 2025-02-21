#include <stdio.h>
#include <math.h>

double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

double sineSeries(double x, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double term = pow(x, 2 * i + 1) / factorial(2 * i + 1);
        if (i % 2 != 0)
            term = -term;
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    int n;
    printf("Enter x (in radians) and number of terms: ");
    scanf("%lf %d", &x, &n);

    printf("sin(%.2lf) using series = %.6lf\n", x, sineSeries(x, n));
    return 0;
}

