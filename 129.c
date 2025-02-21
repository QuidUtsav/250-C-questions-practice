#include <stdio.h>
#include <ctype.h>

void capitalize(char str[]) {
    int i = 0;
    
    while (str[i]) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    capitalize(str);
    
    printf("Capitalized String: %s\n", str);
    return 0;
}

