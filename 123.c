#include <stdio.h>

int main() {
    int N, year;
    
    printf("Enter N (Year Limit): ");
    scanf("%d", &N);
    
    printf("Leap years from 1 to %d: ", N);
    for (year = 1; year <= N; year++) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("%d ", year);
        }
    }
    
    return 0;
}

