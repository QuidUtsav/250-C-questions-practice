#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches %= 12;
    }
    return result;
}

int main() {
    struct Distance d1 = {5, 8};
    struct Distance d2 = {3, 10};
    struct Distance sum = addDistances(d1, d2);
    printf("Total Distance: %d feet %d inches\n", sum.feet, sum.inches);
    return 0;
}

