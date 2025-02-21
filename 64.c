#include <stdio.h>
int main() {
    printf("Printable characters: ");
    for (char ch = 32; ch <= 126; ch++) {
        printf("%c ", ch);
    }
    return 0;
}
