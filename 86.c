#include <stdio.h>

typedef struct {
    double real, imag;
} Complex;

int main() {
    Complex num1, num2, sum;
    
    printf("Enter first complex number (real imag): ");
    scanf("%lf %lf", &num1.real, &num1.imag);
    
    printf("Enter second complex number (real imag): ");
    scanf("%lf %lf", &num2.real, &num2.imag);
    
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    
    printf("Sum = %.2lf + %.2lfi\n", sum.real, sum.imag);
    
    return 0;
}

