#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File created and opened successfully.\n");
    fclose(file);
    printf("File closed successfully.\n");
    return 0;
}

