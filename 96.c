#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}

