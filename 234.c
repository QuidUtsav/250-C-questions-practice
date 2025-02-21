#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s, *ptr;
    ptr = &s;
    printf("Enter name, age and marks: ");
    scanf("%s %d %f", ptr->name, &ptr->age, &ptr->marks);
    printf("Name: %s, Age: %d, Marks: %.2f\n", ptr->name, ptr->age, ptr->marks);
    return 0;
}

