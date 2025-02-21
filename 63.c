#include <stdio.h>
#include <ctype.h>
int main() {
    printf("Printable characters: ");
    for (char ch = 0; ch <= 127; ch++) {
        if (isprint(ch))
            printf("%c ", ch);
    }
    return 0;
}
