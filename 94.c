#include <stdio.h>

int main() {
    int i, j, k, n = 5;
    
    // Upper triangle
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Lower triangle
    for (i = n; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

