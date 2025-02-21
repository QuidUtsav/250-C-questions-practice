#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N, i;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Prime numbers from 1 to %d: ", N);
    for (i = 1; i <= N; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

