#include <stdio.h>

int main() {
    int i, j, ch = 'A';
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}

