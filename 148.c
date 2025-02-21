#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_LEN 50

void removeDuplicateWords(char str[]) {
    char words[MAX_WORDS][MAX_LEN];
    int count = 0;
    char *token = strtok(str, " ");

    while (token != NULL) {
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[count++], token);
        }
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
}

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    removeDuplicateWords(str);

    return 0;
}

