#include <stdio.h>

int main() {
    int N, sum = 0, i;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        sum += i;
    }
    
    printf("Sum of first %d natural numbers is %d\n", N, sum);
    return 0;
}

