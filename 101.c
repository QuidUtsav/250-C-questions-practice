#include <stdio.h>

int main() {
    int i, j, n = 5;
    
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

