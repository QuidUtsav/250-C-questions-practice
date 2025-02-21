#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 32 && ch <= 126)
        printf("%c is a printable character.\n", ch);
    else
        printf("%c is not a printable character.\n", ch);
    return 0;
}
