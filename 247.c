#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student students[2] = {{"John", 20}, {"Alice", 22}};
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d\n", students[i].name, students[i].age);
    }
    return 0;
}

