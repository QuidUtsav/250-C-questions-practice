#include <stdio.h>
#include <ctype.h>
int main() {
    printf("Punctuation marks: ");
    for (char ch = 33; ch <= 126; ch++) {
        if (ispunct(ch))
            printf("%c ", ch);
    }
    return 0;
}
