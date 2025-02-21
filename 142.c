#include <stdio.h>
#include <stdlib.h>

int main() {
    char time[9];
    int hh, mm, ss;

    printf("Enter time in HH:MM:SS format: ");
    scanf("%s", time);

    if (sscanf(time, "%2d:%2d:%2d", &hh, &mm, &ss) != 3 || hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
        printf("Invalid time format!\n");
    } else {
        printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hh, mm, ss);
    }

    return 0;
}

