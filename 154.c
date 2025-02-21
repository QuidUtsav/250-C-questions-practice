#include <stdio.h>
#include <string.h>

/*
   Question: Write a C program to find the frequency of a given word in a string.
   The program should count how many times a specific word appears in the input string.
*/

int wordFrequency(char str[], char word[]) {
    int count = 0;
    char *token = strtok(str, " ");

    while (token != NULL) {
        if (strcmp(token, word) == 0)
            count++;
        token = strtok(NULL, " ");
    }

    return count;
}

int main() {
    char str[200], word[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the word to find frequency: ");
    scanf("%s", word);

    printf("Frequency of '%s': %d\n", word, wordFrequency(str, word));

    return 0;
}

