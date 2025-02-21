#include <stdio.h>

int main() {
    float basic_salary, da, hra, ta, others, pf, it, gross_salary, net_salary;
    scanf("%f %f %f %f %f", &basic_salary, &da, &hra, &ta, &others);

    gross_salary = basic_salary + da + hra + ta + others;
    pf = 0.12 * basic_salary; // PF deduction
    it = 0.15 * gross_salary; // Income tax deduction
    net_salary = gross_salary - pf - it;

    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
