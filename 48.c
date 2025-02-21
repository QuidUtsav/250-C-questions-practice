#include <stdio.h>

int main() {
    int dividend, divisor, remainder;
    scanf("%d %d", &dividend, &divisor);

    remainder = dividend - (dividend / divisor) * divisor;

    printf("Remainder: %d\n", remainder);

    return 0;
}
