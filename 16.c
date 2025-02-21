#include <stdio.h>
#include <math.h>

int main() {
    float num;
    scanf("%f", &num);

    printf("Floor of %.2f is %.2f\n", num, floor(num));
    printf("Ceil of %.2f is %.2f\n", num, ceil(num));

    return 0;
}
