#include <stdio.h>

struct Address {
    char city[50];
    int zip;
};

struct Employee {
    char name[50];
    struct Address addr;
};

int main() {
    struct Employee emp = {"Alice", {"New York", 10001}};
    printf("Employee Name: %s\n", emp.name);
    printf("City: %s\n", emp.addr.city);
    printf("ZIP Code: %d\n", emp.addr.zip);
    return 0;
}

