#include <stdio.h>

int main() {
    int num, A, B;
    scanf("%d %d %d", &num, &A, &B);

    if (num % A == 0 && num % B == 0) {
        printf("%d is divisible by %d and %d\n", num, A, B);
    } else {
        printf("%d is not divisible by %d and %d\n", num, A, B);
    }

    return 0;
}
