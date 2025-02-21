#include <stdio.h>

int main() {
    char str[100], *ptr;
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    gets(str);
    ptr = str;
    while (*ptr) {
        char c = *ptr;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                vowels++;
            else
                consonants++;
        }
        ptr++;
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}

