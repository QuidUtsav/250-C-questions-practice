#include <stdio.h>

int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print spaces
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Print decreasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

