#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch == ' ' || ch == '\t' || ch == '\n') {
        printf("%c is a whitespace character\n", ch);
    } else {
        printf("%c is not a whitespace character\n", ch);
    }

    return 0;
}
