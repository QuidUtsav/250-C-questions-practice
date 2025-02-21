#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower, upper;
    scanf("%d %d", &lower, &upper);

    srand(time(0)); // Seed the random number generator
    int random_num = (rand() % (upper - lower + 1)) + lower;

    printf("Random number between %d and %d: %d\n", lower, upper, random_num);

    return 0;
}
