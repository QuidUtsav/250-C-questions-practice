#include <stdio.h>

int main() {
    float basic_salary, da, hra, gross_salary;
    scanf("%f", &basic_salary);

    da = 0.4 * basic_salary;  // 40% of basic salary
    hra = 0.2 * basic_salary; // 20% of basic salary
    gross_salary = basic_salary + da + hra;

    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}
