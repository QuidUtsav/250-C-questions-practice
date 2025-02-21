#include <stdio.h>

int global_var = 10; // Global variable

void demoFunction() {
    int local_var = 20; // Local variable
    printf("Local variable inside function: %d\n", local_var);
    printf("Global variable inside function: %d\n", global_var);
}

int main() {
    int local_var = 30; // Local variable in main
    printf("Local variable in main: %d\n", local_var);
    printf("Global variable in main: %d\n", global_var);

    demoFunction();

    return 0;
}
