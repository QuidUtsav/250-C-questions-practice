#include <stdio.h>
#include <stdlib.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0, base = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

int main() {
    long long binary1, binary2;
    printf("Enter two binary numbers: ");
    scanf("%lld %lld", &binary1, &binary2);

    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);
    
    int product = decimal1 * decimal2;
    printf("Product in binary: %lld\n", decimalToBinary(product));

    return 0;
}

