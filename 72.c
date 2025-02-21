#include <stdio.h>
int main() {
    float base1, base2, height, area;
    printf("Enter base1, base2, and height of the trapezium: ");
    scanf("%f %f %f", &base1, &base2, &height);
    area = 0.5 * (base1 + base2) * height;
    printf("Area of the trapezium: %.2f\n", area);
    return 0;
}
