#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase character\n", ch);
    } else {
        printf("%c is not an uppercase character\n", ch);
    }

    return 0;
}
