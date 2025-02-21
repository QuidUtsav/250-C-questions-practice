#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int term = i * i * i;
        if (i % 2 == 0)
            term = -term;
        sum += term;
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}

