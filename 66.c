#include <stdio.h>
int main() {
    int days, weeks, years;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - (years * 365 + weeks * 7);
    printf("Years: %d, Weeks: %d, Days: %d\n", years, weeks, days);
    return 0;
}
