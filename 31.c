#include <stdio.h>
#include <string.h>

int main() {
    char buffer[50];
    memset(buffer, 'A', 10); // Set first 10 bytes to 'A'
    buffer[10] = '\0'; // Null-terminate the string

    printf("Buffer: %s\n", buffer);

    return 0;
}
