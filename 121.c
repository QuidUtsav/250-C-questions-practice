#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original = num, sum = 0, count = 0, digit;
    
    while (original != 0) {
        count++;
        original /= 10;
    }
    
    original = num;
    while (original != 0) {
        digit = original % 10;
        sum += pow(digit, count);
        original /= 10;
    }
    
    return sum == num;
}

int main() {
    int N, i;
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Armstrong numbers from 1 to %d: ", N);
    for (i = 1; i <= N; i++) {
        if (is_armstrong(i))
            printf("%d ", i);
    }
    
    return 0;
}

