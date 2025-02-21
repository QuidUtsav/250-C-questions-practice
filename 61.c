#include <stdio.h>
int main() {
    printf("Punctuation marks: ");
    for (char ch = 33; ch <= 126; ch++) {
        if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
            printf("%c ", ch);
    }
    return 0;
}
