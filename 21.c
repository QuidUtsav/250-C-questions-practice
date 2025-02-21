#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, perimeter;
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Area of circle: %.2f\n", area);
    printf("Perimeter of circle: %.2f\n", perimeter);

    return 0;
}
