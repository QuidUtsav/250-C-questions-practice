#include <stdio.h>

int main() {
    float distance_km;
    scanf("%f", &distance_km);

    float distance_m = distance_km * 1000;
    float distance_cm = distance_m * 100;
    float distance_feet = distance_km * 3280.84;
    float distance_inches = distance_feet * 12;

    printf("Distance in meters: %.2f\n", distance_m);
    printf("Distance in centimeters: %.2f\n", distance_cm);
    printf("Distance in feet: %.2f\n", distance_feet);
    printf("Distance in inches: %.2f\n", distance_inches);

    return 0;
}
