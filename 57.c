#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
        printf("%c is a punctuation mark.\n", ch);
    else
        printf("%c is not a punctuation mark.\n", ch);
    return 0;
}
