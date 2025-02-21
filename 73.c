#include <stdio.h>
int main() {
    float d1, d2, area;
    printf("Enter diagonals of the rhombus: ");
    scanf("%f %f", &d1, &d2);
    area = 0.5 * d1 * d2;
    printf("Area of the rhombus: %.2f\n", area);
    return 0;
}
