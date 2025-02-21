#include <stdio.h>
#include <string.h>

/*
   Question: Write a C program to find the highest frequency of a character in a given string.
   The program should read a string from the user and determine which character appears the most.
*/

void findHighestFrequencyChar(char str[]) {
    int freq[256] = {0};  // ASCII character frequency
    char maxChar;
    int maxFreq = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Character with highest frequency: %c (%d times)\n", maxChar, maxFreq);
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    findHighestFrequencyChar(str);

    return 0;
}

