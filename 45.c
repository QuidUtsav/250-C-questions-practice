#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = a + (~b + 1); // Equivalent to a - b

    printf("Result: %d\n", result);

    return 0;
}
