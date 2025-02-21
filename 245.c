#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void printDetails(struct Student *ptr) {
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
}

int main() {
    struct Student s1 = {"Charlie", 25};
    printDetails(&s1);
    return 0;
}

