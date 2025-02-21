#include <stdio.h>
#include <math.h>
int main() {
    float radius, height, surfaceArea, volume;
    printf("Enter radius and height of the cylinder: ");
    scanf("%f %f", &radius, &height);
    surfaceArea = 2 * M_PI * radius * (radius + height);
    volume = M_PI * radius * radius * height;
    printf("Surface area of the cylinder: %.2f\n", surfaceArea);
    printf("Volume of the cylinder: %.2f\n", volume);
    return 0;
}
