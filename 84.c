#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    long long result = factorial(n) / factorial(n - r);
    printf("nPr = %lld\n", result);

    return 0;
}

