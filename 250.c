#include <stdio.h>

int main() {
    FILE *file;
    char text[] = "Hello, File Handling in C!";
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    for (int i = 0; text[i] != '\0'; i++) {
        fputc(text[i], file);
    }
    fclose(file);

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File content: ");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}

