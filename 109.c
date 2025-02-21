#include <stdio.h>

int main() {
    int N, i = 2;
    printf("Enter N: ");
    scanf("%d", &N);
    
    while (i <= N) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}

