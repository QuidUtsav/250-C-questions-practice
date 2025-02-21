#include <stdio.h>

int main() {
    int n, num = 0, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        num = num * 10 + 1;
        sum += num;
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}

