#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Number\tSquare\tCube\tSquare Root\n");
    for (i = 1; i <= N; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i, i * i, i * i * i, sqrt(i));
    }
    
    return 0;
}

