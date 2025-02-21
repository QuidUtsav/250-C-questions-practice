#include <stdio.h>

double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += (double)(i * i) / factorial(i);

    printf("Sum of the series: %.6lf\n", sum);
    return 0;
}

