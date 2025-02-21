#include <stdio.h>

int main() {
    double x, y;
    
    printf("Enter coordinates (x y): ");
    scanf("%lf %lf", &x, &y);
    
    if (x > 0 && y > 0)
        printf("Point is in Quadrant 1\n");
    else if (x < 0 && y > 0)
        printf("Point is in Quadrant 2\n");
    else if (x < 0 && y < 0)
        printf("Point is in Quadrant 3\n");
    else if (x > 0 && y < 0)
        printf("Point is in Quadrant 4\n");
    else if (x == 0 && y == 0)
        printf("Point is at the Origin\n");
    else if (x == 0)
        printf("Point is on the Y-axis\n");
    else
        printf("Point is on the X-axis\n");
    
    return 0;
}

