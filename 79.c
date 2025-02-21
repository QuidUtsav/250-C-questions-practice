#include <stdio.h>
#include <math.h>
int main() {
    float radius, height, surfaceArea, volume;
    printf("Enter radius and height of the cone: ");
    scanf("%f %f", &radius, &height);
    surfaceArea = M_PI * radius * (radius + sqrt(height * height + radius * radius));
    volume = (1.0 / 3) * M_PI * radius * radius * height;
    printf("Surface area of the cone: %.2f\n", surfaceArea);
    printf("Volume of the cone: %.2f\n", volume);
    return 0;
}
