#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, surface_area, volume;
    
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    
    surface_area = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    
    printf("Surface Area: %.2lf\n", surface_area);
    printf("Volume: %.2lf\n", volume);
    
    return 0;
}

