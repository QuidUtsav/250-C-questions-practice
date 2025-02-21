#include <stdio.h>

int main() {
    float num1, num2, sum, average;
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    average = sum / 2;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
