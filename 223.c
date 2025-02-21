#include <stdio.h>

int isPrime(int num, int i) {
    if (i == 1)
        return 1;
    if (num % i == 0)
        return 0;
    return isPrime(num, i - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1 || !isPrime(num, num / 2))
        printf("Not Prime\n");
    else
        printf("Prime\n");
    return 0;
}

