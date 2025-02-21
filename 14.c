#include <stdio.h>
#include <math.h>

int main() {
    float x, result;
    int n;
    scanf("%f %d", &x, &n);

    result = pow(x, n);
    printf("%.2f^%d = %.2f\n", x, n, result);

    return 0;
}
