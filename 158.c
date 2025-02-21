#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
   Question: Write a C program to find the frequency of each word in the given string.
   The program should take a string as input and count how many times each word appears.
*/

#define MAX_WORDS 100
#define MAX_LEN 50

void findWordFrequency(char str[]) {
    char words[MAX_WORDS][MAX_LEN];
    int count[MAX_WORDS] = {0};
    int n = 0;

    char *token = strtok(str, " ");
    while (token != NULL) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(words[i], token) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[n], token);
            count[n] = 1;
            n++;
        }
        token = strtok(NULL, " ");
    }

    printf("Word Frequency:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", words[i], count[i]);
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character

    findWordFrequency(str);

    return 0;
}

