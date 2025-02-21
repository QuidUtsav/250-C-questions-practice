#include <stdio.h>
#include <math.h>
int main() {
    float length, width, height, surfaceArea, volume, spaceDiagonal;
    printf("Enter length, width, and height of the cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    surfaceArea = 2 * (length * width + width * height + height * length);
    volume = length * width * height;
    spaceDiagonal = sqrt(length * length + width * width + height * height);
    printf("Surface area of the cuboid: %.2f\n", surfaceArea);
    printf("Volume of the cuboid: %.2f\n", volume);
    printf("Space diagonal of the cuboid: %.2f\n", spaceDiagonal);
    return 0;
}
