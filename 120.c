#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Even numbers: ");
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    
    printf("\nOdd numbers: ");
    for (i = 1; i <= N; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    
    return 0;
}

