#include <stdio.h>

void copyString(char *src, char *dest) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copyString(src + 1, dest + 1);
}

int main() {
    char str[100], copied[100];

    printf("Enter a string: ");
    scanf("%s", str);

    copyString(str, copied);
    printf("Copied String: %s\n", copied);

    return 0;
}

