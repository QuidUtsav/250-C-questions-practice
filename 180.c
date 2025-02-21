#include <stdio.h>

/*
   Question: Write a C program to pass a structure to a user-defined function.
   The function should print the structure data.
*/

struct Student {
    char name[50];
    int age;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

int main() {
    struct Student s1 = {"John Doe", 20};
    printStudent(s1);
    return 0;
}

