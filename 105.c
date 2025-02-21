#include <stdio.h>

int main() {
    int i, j, n = 5;
    for (i = 0; i < n; i++) {
        for (j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (j = i; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}

