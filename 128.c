#include <stdio.h>

int main() {
    char words[5][20] = {"Hello", "World", "C", "Programming", "Language"};
    
    printf("Array of Strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}

