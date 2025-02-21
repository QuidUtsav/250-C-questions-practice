#include <stdio.h>
int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    printf("Uppercase character: %c\n", ch);
    return 0;
}
