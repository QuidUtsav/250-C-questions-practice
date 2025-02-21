#include <stdio.h>
int main() {
    float base, height, area;
    printf("Enter base and height of the parallelogram: ");
    scanf("%f %f", &base, &height);
    area = base * height;
    printf("Area of the parallelogram: %.2f\n", area);
    return 0;
}
