#include <stdio.h>

int main() {
    int num1, num2, num3, count;
    printf("Enter three numbers: ");
    count = scanf("%d %d %d", &num1, &num2, &num3);

    printf("Total inputs taken: %d\n", count);

    return 0;
}
