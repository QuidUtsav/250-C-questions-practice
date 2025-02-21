#include <stdio.h>

int main() {
    float marks1, marks2, marks3, total, percentage;
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    printf("Percentage: %.2f\n", percentage);

    if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 45) {
        printf("Division: Second\n");
    } else if (percentage >= 33) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
