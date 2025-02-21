#include <stdio.h>

int atoi(char *str) {
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

int main() {
    char str[100];
    scanf("%s", str);

    int num = atoi(str);
    printf("Integer: %d\n", num);

    return 0;
}
