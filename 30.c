#include <stdio.h>

int main() {
    float basic_salary, employee_pf, employer_pf;
    scanf("%f", &basic_salary);

    employee_pf = 0.12 * basic_salary; // Employee contributes 12%
    employer_pf = 0.12 * basic_salary; // Employer contributes 12%

    printf("Employee PF: %.2f\n", employee_pf);
    printf("Employer PF: %.2f\n", employer_pf);

    return 0;
}
