#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, found = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    
    printf("Indexes of '%c': ", ch);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            printf("%d ", i);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Character not found.");
    }
    
    return 0;
}

